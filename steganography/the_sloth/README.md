En cherchant longtemps dans la mauvaise direction avec des outils comme zsteg j'ai décidé de revenir aux bases ...

En faisant cette commande :
strings hey.png > str

J'ai remarqué que les premières lignes de str contiennent des IDAT et que la lettre avant chaque IDAT formait FLAG-...

Or en faisant strings hey.png | grep IDAT on obtient ceci:
FIDATx
LIDAT~
AIDAT
GIDAT
-IDAT
gIDAT
7IDAT
7IDAT
mIDATy
iIDATws
FIDATv
1IDAT
EIDAT
1IDAT$
aIDAT
wIDAT
TIDAT6
SIDAT
8IDATp>
tIDATj
9IDAT
TIDAT
kIDAT
YIDAT??
2IDAT^
hIDAT~
EIDAT
MIDAT
wIDATu
2IDAT
sIDATlU
qIDATA
eIDAT
XIDAT
GIDAT
tIDAT
IDAT

Soit : FLAG-g77miF1E1awTS8t9TkY2hEMw2sqeXGt