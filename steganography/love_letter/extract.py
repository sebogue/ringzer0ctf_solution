# Lire le fichier en binaire
with open("LoveLetter.txt", "rb") as f:
    data = f.read()

binary = ""

for byte in data:
    if byte >= 128:       # octet "non-imprimable" -> 1
        binary += "1"
    elif byte == 32:      # espace -> 0
        binary += "0"

# Transformer la chaîne binaire en texte
flag = ""
for i in range(0, len(binary), 8):
    byte = binary[i:i+8]
    if len(byte) == 8:
        flag += chr(int(byte, 2))

print(flag)
