import re
import subprocess
import time

import pexpect

SSH_HOST = "challenges.ringzer0ctf.com"
SSH_PORT = 10336
SSH_USER = "sso"
SSH_PASS = "sso"
HASH_EXTENDER = "./hash_extender/hash_extender"

def ssh():
    cmd = f"ssh -o StrictHostKeyChecking=no -p {SSH_PORT} {SSH_USER}@{SSH_HOST}"
    child = pexpect.spawn(cmd, encoding='utf-8', timeout=20)
    child.expect('password:')
    child.sendline(SSH_PASS)
    # wait until the service prints the token/HMAC and the prompt asking for Private Token:
    child.expect('Private Token:')
    block = child.before  # contains the lines with Token/HMAC
    token_m = re.search(r'Token:\s*([0-9a-fA-F]+)', block)
    hmac_m  = re.search(r'HMAC:\s*([0-9a-fA-F]+)', block)
    token = token_m.group(1) if token_m else None
    hmac  = hmac_m.group(1) if hmac_m  else None
    # child remains open and positioned at the "Private Token:" prompt (we haven't sent anything yet)
    return child, token, hmac

def get_credentials():
    child, token, hmac = ssh()
    plaintext = bytes.fromhex(token).decode('ascii')
    return child, plaintext, hmac

def hash_extend(plaintext, hmac, secret_length):
    cmd = [
        HASH_EXTENDER,
        "--data", plaintext,
        "--signature", hmac,
        "--append", "&username=admin",
        "--secret", str(secret_length),
        "--format", "sha1"
    ]
    result = subprocess.run(
        cmd,
        capture_output=True,
        text=True,
        timeout=5
    )
    output = result.stdout
    sig = re.search(r'New signature:\s*([0-9a-fA-F]+)', output)
    string = re.search(r'New string:\s*([0-9a-fA-F]+)', output)
    return string.group(1), sig.group(1)

def send_credentials(child, new_token, new_hmac):
    """
    Send new_token and new_hmac into the already-open pexpect `child` session.
    Wait for the server response, capture it, print it, then close the session.
    """
    # child is currently at the "Private Token:" prompt
    child.sendline(new_token)          # send token (hex)
    child.expect('Private HMAC:')      # wait for next prompt
    child.sendline(new_hmac)           # send hmac (hex)
    # wait for server response (likely prints result then closes). Accept EOF or timeout.
    try:
        child.expect(pexpect.EOF, timeout=10)
        response = child.before
    except pexpect.TIMEOUT:
        # if server doesn't close, grab what's available
        response = child.before
    # print returned output then close session
    print(response)
    child.close()
    return response

def main():
    for secret_length in range(1, 65):
        print("trying secret length", secret_length)
        child, plaintext, hmac = None, None, None
        # open session and grab token/hmac
        child, plaintext, hmac = get_credentials()
        new_token, new_hmac = hash_extend(plaintext, hmac, secret_length)
        # send forged creds in the same session and capture output, then close
        response = send_credentials(child, new_token, new_hmac)
        m = re.search(r'(FLAG-[0-9a-fA-F]+)', response)
        if m:
            print(f"FOUND FLAG: {m.group(1)}")
            break
        print(f"\n\n[*] Response: {response}\n\n")
        time.sleep(1)
    print("\n[*] Scan complete")

if __name__ == "__main__":
    main()
