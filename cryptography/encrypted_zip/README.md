file weird.zip me dit qu'il a été zip en mode deflate.
Je sais qu'il y a le fichier weird.txt à l'intérieur.
Avec l'outil pkcrack (j'ai utilisé celui là car il a le mode -a pour automatiser contrairement à bkcrack).
7z a new_file.zip weird.txt
/chemin/vers/bin/pkcrack -C weird.zip -c "weird.txt" -P new_file.zip -p "weird.txt" -a

Zip commence d'abord en compressant un dossier avec deflate (combinaison de huffman et lz77).
Ensuite le résultat de la compression est chiffré avec ZipCrypto (dans notre cas et c'est vulnérable ...). ZipCrypto chiffre le flux compressé avec un flux dérivé d’un état interne de 3 valeurs

La particularité est qu'il est possible de trouver les clés plus facilement via un texte clair connu (surtout plus il est long).

Info sur le sous jacent de pkcrack https://math.ucr.edu/~mike/zipattacks.pdf

Voir pour un résumé:
https://www.youtube.com/watch?v=F4Tw9JwEhsA


*** C'est long à exécuter
mais ca retourne testtest comme mot de passe
FLAG-Mk5N1z6PDbcw6alA1G8ixz85

*** Note : 
La version du software affiché avec zipinfo -v nom_du_zip me dit 6.3

Méthodes pour savoir quel outil a créé un fichier .zip :

zipinfo -v fichier.zip (ou unzip -v) :

- Champ “version of encoding software” (version made by) → indique l’encodeur interne utilisé :
    - 6.3 → 7-Zip ou Info-ZIP compatible Windows/DOS
    - 3.0 → Info-ZIP Unix
    - 2.x → anciens PKZIP


- Extra fields :
    - 7-Zip ajoute souvent extra fields spécifiques PKWARE Win32 même sur macOS.
    - Info-ZIP Unix ajoute souvent un champ 0x5855 pour permissions Unix.