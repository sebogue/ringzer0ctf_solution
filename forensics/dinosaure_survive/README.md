Premièrement je regarde le type de fichier avec la commande file. Je vois directement qu'il s'agit d'un fichier EWF/Expert Witness/EnCase image file format.

Chatgpt m'a fait essayé des tas de truc pour analyser ce fichier. Finalement j'ai réussi avec autopsy (installé via mac ports)

Perso, j'ai eu un bug avec un fichier log. Voila le fix:
mkdir -p /opt/local/var/lib/autopsy
sudo chown -R $(whoami) /opt/local/var/lib/autopsy

J'ai regardé un tutoriel sur le fonctionnement de l'outil et j'ai fini par analyser le fichier et trouvé le flag

flag-6b96e212b3f85968db654f7892f06122