J'ai pas trop compris pourquoi j'ai un fichier .cap et non .pcap donc j'ai fais une conversion (de plus la commande file affichait que le fichier .cap était un pcap donc pas de soucis)
En regardant le fichier dans wireshark, je me suis intéressé au Leftover capture data ...
ca semble être report HID USB (8-octets)

En gros, c'est probablement les touches tapés par une personne sur un clavier.

Or on va extraire tout ça pour voir ce que ça donne:

### extraire la partie hex
grep -o 'Leftover Capture Data: .*' dump_spy.txt > leftovers.lines

** dump_spy.txt est le pcap exporté en .txt
### nettoyer le préfixe puis retirer espaces
sed 's/Leftover Capture Data: //' leftovers.lines | tr -d ' \t' > leftovers.hex

### concaténer en une seule suite hex et créer un binaire
cat leftovers.hex | tr -d '\n' > all.hex
xxd -r -p all.hex > all.bin

### regarder ce que contient en clair
strings all.bin | sed -n '1,200p'
hexdump -C all.bin | head -n 200

### Exécution du code python

Il est important de savoir que:
1. Le format HID standard pour un clavier est 8 octets : 
[modifier, reserved, key1, key2, key3, key4, key5, key6]

2. Le code utilise un mapping classique USB HID Usage ID pour les claviers QWERTY. Puis le mapping quand il y a présence d'un shift j'ai simplement mis ce qui correspondait avec mon clavier (un clavier QWERTY typique)


Ca donne certains morceaux de texte lisible dont un flag. En essayant avec le flag Flag-112234ETEH, on s'apperçoit que ça ne fonctionne pas. J'ai cependant remarqué que certains caractères se répète plus d'une fois ... par exemple: challenge@gmaaiil.coomm, iinn thee  world, hhii mom, i lovveee  yoouu, bbyyee ...

Or en voyant ça je me suis dit que le flag avait sûrement des caractères dupliqués à supprimer.

Résultat (on obtient le flag en enlevant le 1 et le 2 en trop) :
Flag-1234ETEH