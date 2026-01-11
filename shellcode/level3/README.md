ssh level3@challenges.ringzer0ctf.com -p 10127

Mot de passe: FLAG-351p97Rd81169t7d4904K6031S

Cette fois le payload de la question précédente a des caractères illégaux:
"\x0a\x0d\x2f\x2e\x62\x48\x98\x99\x30\x31" 


On ne pourra donc pas mettre le registre rax à 0 avec la technique xor

on va avoir cette approche plutôt:

```asm
push byte 1     ; Pousse 1 sur la pile
pop rbx         ; Récupère dans rbx (rbx = 1)
dec bl          ; Décrémente le byte bas (1 - 1 = 0)
```
On ne pourra pas non plus utiliser xchg pour changer les registres, on va donc utiliser:

```asm
push rax    ; Sauvegarde rax
push rbx    ; Sauvegarde rbx
pop rax     ; rax prend la valeur de rbx
pop rbx     ; rbx prend la valeur de rax
```

J'ai ensuite lancé docker:
docker run -it --rm -v $(pwd):/work ubuntu:20.04 bash

Dans le conteneur Docker
apt-get update && apt-get install -y nasm binutils

Finalement on exécute:
./build.sh level3.asm


Une fois le payload mis, il suffit d'écrire /home/level3/level3.flag

FLAG-GSqrWoJEFRCbfNKUMNiTs3sYiM