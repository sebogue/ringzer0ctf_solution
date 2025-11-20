#!/bin/bash
set -e

nasm -f elf64 $1 -o $1.o
ld -N -s -o $1.elf $1.o                    # ← LINK d'abord!

# Extrait depuis l'exécutable final, pas le .o
objdump -D $1.elf -M intel | grep '^ ' | cut -f2 | \
tr -d '\n ' | sed 's/\([0-9a-f][0-9a-f]\)/\\x\1/g' > $1.payload

cat $1.payload