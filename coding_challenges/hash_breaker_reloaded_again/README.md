# Problématique
Cette fois, le hash se fait sur les caractères minuscule (a-z) et les chiffres de 0-9. Le nombre de combinaisons est d'environ 2.17 miliard pour 6 caractères (J'avais rien trouvé avec 4-5 caractères ...). Faire une recherche pendant l'exécution du programme prendra beaucoup plus que 3 secondes. 

# Solution
On sait que sha1 produit un hash de lettre minuscule et chiffres. On pourrait créer des fichiers dont le nom est composé de 4 caractères (lettre minuscule et chiffre). Ça permettrait de diminuer l'espace de recherche. Soit 36x36x36x36 = 1 679 616 fichiers. Chacun de ces fichiers stockera le restant de la string à partir du 4e caractère suivi du mot ayant généré le hash en question. Pour un même fichier, il y aura plusieurs restant de hash dont chacun d'entre eux ont évidemment les mêmes 4 premiers caractères (nom du fichier). On devra rouler un code au préalable pour stocker le tout (on peut utiliser un ssd si nécessaire en cas de manque de mémoire sur ordi). 

Une fois terminé l'écriture des fichiers on peut lancer le programme qui cherchera le mot hashé. Quand on fetch le hash sur la page web, les 4 premiers caractères permettront de savoir dans quel fichier lire et chaque fichier aura quelques centaines/miliers de "restant" de hash (ça se parcours super vite). Le concept ressemble un peu au indexing dans un base de donnée en diminuant l'espace de recherche pour aller plus vite mais en utilisant + de mémoire. 

*** Ne pas oublier de supprimer les fichiers une fois la solution trouvé


*** Pour des raisons de temps j'ai multithread mon code d'écriture de fichier et créé des buffer qui se vident à chaque 100 000 hash pour chaque threads afin d'éviter de toujours ouvrir et fermer des fichiers (coûteux en temps). Malgré toutes les optimisations l'ensemble des possibilités avec 8 threads concurrent prend plus d'une heure. Je suggère donc d'interrompre le programme après 20-30 minutes (ctrl-c) et d'essayer de faire des requêtes de nouveau hash sur le site web jusqu'à obtenir un match. Personnelement, j'ai laissé le code roulé 25 minutes et ensuite fait environ 200 requêtes avant d'avoir un match. À moins de vouloir une solution qui marche peut importe le hash, attendez la fin de toutes les écritures (+ d'une heure).


*** On aurait pu choisir autre chose que les 4 premiers caractères pour le nom des fichiers. Ex : 3, on aurait 36*36*36 = 46 000 fichiers avec un peu + de 40 000 entrées par fichier ce qui se parcours rapidement aussi.