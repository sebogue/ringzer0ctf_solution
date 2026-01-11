#!/usr/bin/env python3

payload = ''

# Lire le décodeur (non encodé)
with open('decoder', 'rb') as decoder:
    data = decoder.read()
    for byte in data:
        payload += "\\x%02x" % byte

# Lire le shellcode et l'encoder (+1 à chaque byte)
with open('shellcode', 'rb') as sc:
    data = sc.read()
    for byte in data:
        payload += "\\x%02x" % ((byte + 1) % 256)

print(payload)
print(f"\nTaille totale: {len(payload)//4} bytes")