#!/bin/bash
set -e

echo "=== Étape 1: Compilation du shellcode original ==="
nasm -f bin shellcode.asm -o shellcode

echo "=== Étape 2: Encodage du shellcode ==="
python3 encode.py

echo "=== Étape 3: Compilation du shellcode final ==="
nasm -f bin final.asm -o final

echo "=== Étape 4: Génération du payload ==="
xxd -p final | tr -d '\n' | sed 's/\(..\)/\\x\1/g' > payload.txt

echo ""
echo "Payload généré dans payload.txt"
echo ""
cat payload.txt
echo ""
echo "Taille: $(stat -f%z final 2>/dev/null || stat -c%s final) bytes"

echo ""
echo "=== Vérification des bad chars ==="
if xxd -p final | tr -d '\n' | grep -qE '(0a|0d|2f|ff|0f|05|68|4[0-9a-f]|5[0-9a-f]|6[0-5])'; then
    echo "WARNING: Bad chars détectés !"
else
    echo "Aucun bad char détecté !"
fi