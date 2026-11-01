Avec dnspy, je vois que le script fait essentiellement un rc4, que je peux facilement reverse étant donné xor
```python
import base64
def rc4(key, data):
    S = list(range(256))
    j = 0
    out = []
    for i in range(256):
        j = (j + S[i] + key[i % len(key)]) % 256
        S[i], S[j] = S[j], S[i]
    i = 0
    j = 0
    for byte in data:
        i = (i + 1) % 256
        j = (j + S[i]) % 256
        S[i], S[j] = S[j], S[i]
        out.append(byte ^ S[(S[i] + S[j]) % 256])
    return bytes(out)

byte_arr = [
    70, 63, 31, 72, 225, 112, 131, 188, 44, 138, 241, 37, 101, 103, 158, 163,
    63, 150, 87, 16, 199, 226, 174, 239, 202, 254, 43, 129, 140, 202, 217, 217
]

x1 = base64.b64decode("Mc9I")
x2 = base64.b64decode("P/QajWHKWZNslmOb")

proc_name = rc4(byte_arr, x1)
func_name = rc4(byte_arr, x2)

print(f"Processus requis : {proc_name}")
print(f"Fonction de thread : {func_name}")

# La string chiffrée cible est :
target_b64 = "0WtvFEwLqwW0gsE92MXY787MTctG7BBWAg9k2+Dc3sVuAYiBxw=="
target_data = base64.b64decode(target_b64)

for p1 in range(256):
    key = [67, p1]
    # Puisque le chiffrement RC4 (XOR) est symétrique, rc4(key, target_data) donnera param2 en texte clair
    decrypted = rc4(key, target_data)
    try:
        dec_str = decrypted.decode('ascii')
        if dec_str.isprintable() and 'flag' in dec_str.lower():
            print(f"Trouvé ! param1={p1}, flag='{dec_str}'")
    except:
        pass
```

FLAG-27c0a2561b4919f490b0b048a4af0cee