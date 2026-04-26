import base64, hashlib

flag_enc = "LtmkVWJP33Hxy8saEn19wVb9+LgmoRsAfP0l11sM0A=="
flag_bytes = base64.b64decode(flag_enc)

time_sid = base64.b64decode("HPyId3JHiH6EgYVgdEtNy1Td+p8CnUdiPr96z3BY8WG8ND1T6fAO6g==")

ks = bytearray(40)
for i, c in enumerate(b"time=00:23:42|username=1234|r="):
    ks[i] = time_sid[i] ^ c

target = "ebc3dfd5915d86a48d42564b8e05dc15"

for b in range(256):
    ks[30] = b
    flag_try = bytes([flag_bytes[i] ^ ks[i] for i in range(31)])
    if hashlib.md5(flag_try).hexdigest() == target:
        print(f"🎉 FLAG TROUVÉ: {flag_try}")
        break
    if 32 <= b < 127:
        print(f"  byte={chr(b)!r}: {flag_try!r}")