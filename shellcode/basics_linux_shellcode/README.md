ssh level1@challenges.ringzer0ctf.com -p 10127
Mot de passe: 50g8O1R0C42nP7N

Architecture Linux x64, on devra utiliser docker possiblement

Je commence en créant un fichier build.sh (pas oublier chmod +x)
nasm -f elf64 $1 -o $1.o génère un output file
objdump -D $1.o -M intel | grep '^ ' | cut -f2 | tr -d '\n ' | sed 's/\([0-9a-f][0-9a-f]\)/\\x\1/g' > $1.payload va générer le payload sous la forme voulu

Ensuite j'ai fait un code assembleur simple avec chatGPT

J'ai ensuite lancé docker:
docker run -it --rm -v $(pwd):/work ubuntu:20.04 bash

Dans le conteneur Docker
apt-get update && apt-get install -y nasm binutils

Finalement on exécute:
./build.sh basics.asm

On récupère ensuite le .payload qu'on va copié dans le terminal

FLAG-1Ql864uTj8pY2470t85VX42q1B