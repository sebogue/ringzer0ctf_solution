En regardant les fichiers pcap, j'ai reconstitué un fichier en analyse tcp stream sur wireshark. Le fichier est du type HP PCL printer data et peut être directement enregistré depuis wireshark (je l'ai nommé extracted). Esuite, Claude.ai m'a dit d'enlever la première ligne du fichier pour s'assurer que ça donne un fichier Zenographics ZjStream printer data (big-endian). (Voir fichier extracted2)

ZjStream est un langage de données d'impression conçu par Zenographics pour envoyer des images bitmap de pages à certaines imprimantes (HP dans notre cas). Au lieu que l'imprimante effectue le rendu de la page, c'est l'ordinateur hôte qui s'en charge à l'aide d'un pilote tel que foo2zjs.

J'ai pas été capable de lire le fichier/générer l'image depuis mon mac ... j'ai utilisé docker (voir mon dockerfile)

```bash
docker build -t zjs-decoder .
docker run -it --rm -v $(pwd):/data zjs-decoder
```

Une fois le shell lancé, faire (dans le répertoire data) :

```bash
zjsdecode -d flag < extracted2
```

Ça va me générer un fichier .pbm

J'ai utilisé ce lien pour le visualiser: https://jumpshare.com/viewer/pbm

On voit le flag sur l'image