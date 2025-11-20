#!/bin/bash
set -e
nasm -f elf64 $1 -o $1.o
objdump -D $1.o -M intel | grep '^ ' | cut -f2 | tr -d '\n ' | sed 's/\([0-9a-f][0-9a-f]\)/\\x\1/g' > $1.payload