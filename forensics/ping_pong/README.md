Commençons par extraire les packets requests ou reply isolé ...

Dans les deux cas on va obtenir le même résultat. 

Pour ce faire on export le pcap sous forme de texte. Ensuite on exécute les commandes suivantes en ordre:

```bash
grep -A 20 "Type: Echo (ping) reply" dump.txt > icmp_replies.txt
grep -o 'Data: .*' icmp_replies.txt > data_lines.txt
sed 's/Data: //' data_lines.txt | tr -d ' \t\n' | xxd -r -p | base64 -D > replies_b64
```

J'ai remarqué 3 streams différents dans le fichier replies_b64, j'ai donc créé file1 file2 file3 contenant respectivement le premier stream, le second stream et le troisième stream. Ces fichiers contenant les streams ne doivent pas avoir les lignes avant stream (stream aussi est exclus) et les lignes après endstream (endstream aussi est exclus). 

Une fois les 3 flux séparés, j'ai exécuté la commande file sur chacun d'eux (pour reconnaitre le type de fichier dont il s'agit). Ce sont tous des zip...

On peut alors les dézipper ainsi:

```bash
python3 -c "import zlib; print(zlib.decompress(open('stream1','rb').read()).decode('latin-1', errors='ignore'))" > stream1.txt

python3 -c "import zlib; print(zlib.decompress(open('stream2','rb').read()).decode('latin-1', errors='ignore'))" > stream2.txt

python3 -c "import zlib; print(zlib.decompress(open('stream3','rb').read()).decode('latin-1', errors='ignore'))" > stream3.txt
```

J'ai remarqué que stream1.txt contient du code PostScript avec des codes hexadécimaux comme <0059>, <0026>, etc.
Stream3.txt nous donne la table de décodage (CMap) qui fait la correspondance entre ces codes et les vraies lettres.
J'ai créé un script Python (decode_hex.py) qui va :

1. Lire tous les codes <XXXX> dans stream1.txt
2. Les convertir en texte avec la table de stream3.txt
3. Afficher le texte décodé et chercher le flag


Voilà le résultat de l'exécution:

TEXTE DÉCODÉ DU PDF:
==== CONFIDENTIAL====Comrade Rausczek, our honorary allies have found the source of the leaks. This person is currently under protection of the Demokratik Republik of Auskev, but we are working diplomatically to resolve the matter.Flag: sasdhbdsahbdsadsabbjbdsavdsae333445rddssaazssd==== CONFIDENTIAL====

Le flag est donc:
sasdhbdsahbdsadsabbjbdsavdsae333445rddssaazssd
