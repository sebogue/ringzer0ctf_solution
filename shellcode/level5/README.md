ssh level5@challenges.ringzer0ctf.com -p 10127

Mot de passe: FLAG-quGaa0q6ragf5h1zrcU1Kt4UDK


Bad chars : \x0a\x0d\x2f\xff\x0f\x05\x68 + tous les bytes de \x40 à \x65 Ça inclut :

\x48 et \x49 : instructions 64-bit
\x4c : utilisé par lea r14
On ne peut PLUS utiliser lea pour trouver l'adresse du shellcode ! 


J'ai ensuite lancé docker:
docker run -it --rm -v $(pwd):/work ubuntu:20.04 bash

Dans le conteneur Docker
apt-get update && apt-get install -y nasm binutils
apt update && apt install -y python3
apt-get update && apt-get install -y xxd

Finalement on exécute:
./build.sh level5.asm


Une fois le payload mis, il suffit d'écrire /home/level5/level5.flag + ctrl-space


FLAG-5ieX3wF1IQ1nZR3X7813I56AZw