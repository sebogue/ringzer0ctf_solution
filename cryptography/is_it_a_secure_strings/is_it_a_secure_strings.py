from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
import base64
import binascii

# Input data
encrypted = "76492d1116743f0423413b16050a5345MgB8AEEAYQBNAHgAZQAxAFEAVABIAEEAcABtAE4ATgBVAFoAMwBOAFIAagBIAGcAPQA9AHwAZAAyADYAMgA2ADgAMwBlADcANAA3ADIAOQA1ADIAMwA0ADMAMwBlADIAOABmADIAZABlAGMAMQBiAGMANgBjADYANAA8ADQAZgAwADAANwA1AGUAMgBlADYAMwA4AGEAZgA1AGQAYgA5ADIAMgBkAGIAYgA5AGEAMQAyADYAOAA="
key_list = [3, 4, 2, 3, 56, 34, 254, 222, 205, 34, 2, 23, 42, 64, 33, 223, 1, 34, 2, 7, 6, 5, 35, 12]
key = bytes(key_list)

# Step 1: Extract and decode base64 part
b64_part = encrypted[32:]
try:
    data = base64.b64decode(b64_part, validate=True)
    print(f"Base64 decoded: {len(data)} bytes")
except Exception as e:
    print(f"Base64 decoding failed: {e}")
    exit()

# Step 2: Decode as UTF-16LE
try:
    utf16_str = data.decode('utf-16le')
    print(f"UTF-16LE string: {utf16_str}")
except Exception as e:
    print(f"UTF-16LE decoding failed: {e}")
    exit()

# Step 3: Split by '|'
parts = utf16_str.split('|')
print(f"Split parts ({len(parts)}): {parts}")

if len(parts) != 3:
    print("Error: Expected 3 parts (version|IV|ciphertext), got", len(parts))
    exit()

# Step 4: Decode IV (base64)
try:
    iv = base64.b64decode(parts[1], validate=True)
    print(f"IV decoded: {len(iv)} bytes, hex: {iv.hex()}")
except Exception as e:
    print(f"IV base64 decoding failed: {e}")
    exit()

# Step 5: Decode ciphertext as hex (not base64)
ciphertext_str = parts[2].replace('<', '8')  # Replace invalid '<' with '8' (assumption)
try:
    ciphertext = binascii.unhexlify(ciphertext_str)
    print(f"Ciphertext decoded: {len(ciphertext)} bytes, hex: {ciphertext.hex()}")
except Exception as e:
    print(f"Ciphertext hex decoding failed: {e}")
    exit()

# Step 6: Decrypt
try:
    cipher = AES.new(key, AES.MODE_CBC, iv)
    plaintext = unpad(cipher.decrypt(ciphertext), AES.block_size)
    # Try multiple encodings
    for enc in ['utf-16le', 'ascii', 'utf-8']:
        try:
            result = plaintext.decode(enc)
            if result.isprintable():
                print(f"\nDecrypted password ({enc}): {result}")
                break
        except:
            pass
    else:
        print("No printable decoding found, raw plaintext (hex):", plaintext.hex())
except Exception as e:
    print(f"Decryption failed: {e}")