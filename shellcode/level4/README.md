ssh level4@challenges.ringzer0ctf.com -p 10127

Mot de passe: FLAG-GSqrWoJEFRCbfNKUMNiTs3sYiM

Bad char list "\x0a\x0d\x2e\x2f\xff\x0f\x05\x48" max size 80 bytes

Là cette fois syscall est banni. Il va falloir encoder notre payload. En faisant une incrémentation de 1 sur un shellcode (qui va lire un fichier un peu comme dans le level3), on pourra décoder le shellcode en faisant une soustraction de 1 sur chacun des bytes du shellcode. On a ainsi dans decoder.asm la soustraction de 1, dans shellcode.asm la lecture du fichier voulu, et un script python qui va incrémenter le payload de shellcode.asm de 1 et le combiner avec le payload decoder faisant la soustraction de 1.


J'ai ensuite lancé docker:
docker run -it --rm -v $(pwd):/work ubuntu:20.04 bash

Dans le conteneur Docker
apt-get update && apt-get install -y nasm binutils
apt update && apt install -y python3

Finalement on exécute:
./build.sh level4.asm


Une fois le payload mis, il suffit d'écrire /home/level4/level4.flag + ctrl-space

FLAG-quGaa0q6ragf5h1zrcU1Kt4UDK
