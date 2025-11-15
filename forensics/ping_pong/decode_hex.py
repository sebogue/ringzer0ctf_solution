#!/usr/bin/env python3
import re

# Table de correspondance depuis stream3
char_map = {
    '0003': ' ',
    '000C': 'A',
    '0014': 'I',
    '0017': 'L',
    '001D': 'R',
    '001F': 'T',
    '0056': ':',
    '0059': '=',
    '016F': ',',
    '0170': '.',
}

# Ajout des ranges
# <0005-0007> = '3-5'
for i in range(3):
    char_map[f'{0x0005+i:04X}'] = chr(0x0033+i)

# <000E-0011> = 'C-F'
for i in range(4):
    char_map[f'{0x000E+i:04X}'] = chr(0x0043+i)

# <0019-001A> = 'N-O'
for i in range(2):
    char_map[f'{0x0019+i:04X}'] = chr(0x004E+i)

# <0026-0035> = 'a-p'
for i in range(16):
    char_map[f'{0x0026+i:04X}'] = chr(0x0061+i)

# <0037-003C> = 'r-w'
for i in range(6):
    char_map[f'{0x0037+i:04X}'] = chr(0x0072+i)

# <003E-003F> = 'y-z'
for i in range(2):
    char_map[f'{0x003E+i:04X}'] = chr(0x0079+i)

def decode_pdf_text(content):
    """Extrait et décode les codes hexadécimaux"""
    # Trouve toutes les séquences <XXXX>
    hex_codes = re.findall(r'<([0-9A-Fa-f]{4})>', content)
    
    decoded_text = ''
    for code in hex_codes:
        code_upper = code.upper()
        if code_upper in char_map:
            decoded_text += char_map[code_upper]
        else:
            decoded_text += f'[?{code}]'
    
    return decoded_text

# Lire stream1.txt
with open('stream1.txt', 'r', encoding='utf-8', errors='ignore') as f:
    content = f.read()

# Décoder
decoded = decode_pdf_text(content)

print("=" * 60)
print("TEXTE DÉCODÉ DU PDF:")
print("=" * 60)
print(decoded)
print("\n" + "=" * 60)

# Chercher le flag
if 'flag' in decoded.lower() or 'FLAG' in decoded:
    print("\n🚩 FLAG TROUVÉ!")
    # Extraire les lignes contenant 'flag'
    lines = decoded.split('\n')
    for line in lines:
        if 'flag' in line.lower():
            print(f">>> {line}")
