En cherchant d'abord avec zsteg j'ai tenté de reconstituer des MPEG mais je n'ai capté aucun signal. En ligne je suis tombé sur un outil très simple pourvisualiser les planes des images avec un UI minimaliste. L'outil est stegsolve.

# Installation
```bash
wget http://www.caesum.com/handbook/Stegsolve.jar -O stegsolve.jar
chmod +x stegsolve.jar
```
# Emplacement (optionel)
```bash
sudo mv stegsolve.jar /usr/local/bin/
echo 'alias stegsolve="java -jar /usr/local/bin/stegsolve.jar"' >> ~/.zshrc
source ~/.zshrc
```
*** J'utilise zshrc mais on peut utiliser un autre ***

Maintenant on peut launch l'application peu importe notre emplacement avec la commande stegsolve

On aurait pu utiliser cet outil pour certaines questions d'avant ...

Je suis ensuite tombé sur une image gray_scale que j'ai save.

Dans cette image on remarque un genre de FLAG-9... c'est peu visible mais le pattern se répète sur 21 lignes une en dessous de l'autre.

Or j'ai pensé à combiner par xor bitwise chaque ligne suivi de or et finalement and puis j'ai réussi à extraire le flag.

Pour ce faire j'ai utilisé un script python.

FLAG-9a51mzi9RPO7Fv99R7768i5S5K