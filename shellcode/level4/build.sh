#!/bin/bash
set -e

echo "=== Compilation du décodeur ==="
nasm -f bin decoder.asm -o decoder

echo "=== Compilation du shellcode ==="
nasm -f bin shellcode.asm -o shellcode

echo "=== Encodage du shellcode ==="
python3 encode.py > final_payload.txt

echo ""
echo "✅ Payload généré dans final_payload.txt"
cat final_payload.txt