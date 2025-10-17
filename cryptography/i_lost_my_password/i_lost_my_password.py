import base64
from Crypto.Cipher import AES

cpassword_b64 = "PCXrmCkYWyRRx3bf+zqEydW9/trbFToMDx6fAvmeCDw"

# Ajouter le padding manquant
missing_padding = len(cpassword_b64) % 4
if missing_padding != 0:
    cpassword_b64 += "=" * (4 - missing_padding)

ct = base64.b64decode(cpassword_b64)
print(ct)

# clé publique MS GPP (32 bytes)
key = bytes.fromhex("4e9906e8fcb66cc9faf49310620ffee8f496e806cc057990209b09a433b66c1b")

ct = base64.b64decode(cpassword_b64)
iv = b"\x00" * 16

cipher = AES.new(key, AES.MODE_CBC, iv) # cpassword de GPP est encrypté avec AES en mode cbc 
plain_padded = cipher.decrypt(ct)

# PKCS#7 unpad
pad_len = plain_padded[-1]
plain = plain_padded[:-pad_len]

# mot de passe stocké en UTF-16LE apparemment
password = plain.decode("utf-16le")
print(password)
