C'est un programme qui a besoin d'un code de 4 chiffres en paramètre...
```bash
for key in `seq -w 0000 9999`; do
    echo -n "($key) " ;
    qemu-ppc -L mini-native-powerpc PowerToThePeople $key ;
    done | grep FLAG
```
ca donne 4 flags potentiellement bon ...

C'est celui ci qui fonctionne:
FLAG-266f9f69bab85c7eb33bdd877db806e5