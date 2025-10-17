Avec des outils pour dé-assembler un fichier exécutable on remarque que c'est un format pour architecture x86_64. Je ne peux l'exécuter sur mon mac donc j'utilise docker.

# Problème

On remarque qu'en réutilisant le même programme que execute_me_if_you_can le programme nous sort un segmentation fault.

J'ai donc dé-assemblé le fichier exécutable (voir la commande ndisasm en ligne et le résultat d'un exemplaire dans dis64.s) 

La première commande est :

00000000  EB4D   jmp 0x4f

Mais le problème est que 0x4f est en plein milieu d'une commande : 

0000004E  043C   add al,0x3c

Donc le shellcode a sûrement été modifié manuellement pour planter.

On remarque plus loin une commande call qu'on va essayer de jmp en modifiant le shell code:

00000052  E8AEFFFFFF        call 0x5

(0x52-0x4E) + 0x4f = 0x52 (donc on va remplacer 4d par 52 dans le shellcode)

Une fois qu'on arrive sur ce call ça saute à 0x5 soit l'instruction suivante:

00000003 6683EC0C sub sp,0xc

Il faudrait que ca tombe sur le pop rsi plutot qui est à 0x2.
On doit donc modifier E8AEFFFFFF pour E8ABFFFFFF dans le shellcode. call = FFFFFF donc E8AE est l'adresse sur laquelle jmp soit le 0x5. 0x5-0x2 = 0x3 donc E8AE - 0x3 = E8AB 