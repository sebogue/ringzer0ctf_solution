file challenge.cabal me retourne challenge.cabal: EBCDIC text

EBCDIC est un encodage 8 bits développé par IBM, c'est assez vieux on utilise plus cet encodage aujourd'hui.

Si je converti le fichier sous forme de fichier ascii plutôt (7 bits), on va pouvoir possiblement lire le contenu.

```bash
dd if=challenge.cabal of=output_ascii.txt conv=ascii
```
On voit ainsi du COBOL.

En gros ce fichier a une valeur ANSWER-OF-LIFE = 42

Ca compare caractère par caractère entre le contenu de la table 001-SET-FLAG-KEY. et ce que l'utilisateur entre en input via un XOR et s'attend à un résultat de 42 pour chaque caractère.

Puis comme XOR est commutatif (A xor B = 42 ≡ A xor 42 = B)

J'ai fais un script python pour donc trouver le flag.

FLAG-COBOL1STHECABALF@VORIT3