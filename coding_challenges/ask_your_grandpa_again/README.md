# Intro
Aller voir le problème ask_grandpa en premier et ensuite revenir au problème ask_grandpa_again

# Ordonner les cartes
On remarque qu'il y a plusieurs cartes. Sachant que les dernières colonnes sont toujours faites pour rétablir l'ordre des cartes, on va pouvoir connaitre leur ordre.
card.jgp = 13370050
grandpa.jpg = 13370060
my.jpg = 13370040
programming.jpg = 13370010
punch.jpg = 13370020
yolo.jpg = 13370030

Ainsi l'ordre est :
programming, punch, yolo, my, card, grandpa


# Fonctionnement du code
J'ai fais un code HTML/js qui va lire dans un canvas histoire d'aller plus vite qu'à la main. Il faut juste rogner correctement les images avant de téléverser l'image sur l'application.

# Exécution de l'application
Dans VScode clique droit sur le fichier html -> open with live server

# Résultat
PROGRAMWFLAG13370010
I=93113370020
J=280013370030
WRITE(6,1337)J+29,(J/4)+20,I13370040
1337FORMAT(11HFLAG-DFEB0D,I4,1H-,I3,10HFDBECDF39D,I3)13370050
END13370060

# Décryptage ligne par ligne :

PROGRAM WFLAG13370010
→ Le programme Fortran s’appelle WFLAG.
→ Les nombres à la fin (13370010) sont les numéros de ligne (très classique sur cartes Fortran).


I = 93113370020
→ Variable I initialisée à 931. (les chiffres après 1337...020 font partie du numéro de ligne).


J = 280013370030
→ Variable J initialisée à 2800.


WRITE(6,1337) J+29, (J/4)+20, I13370040
→ Écrit sur l’unité de sortie 6 (souvent stdout ou la console) en utilisant le FORMAT 1337.
→ Il affiche 3 valeurs calculées :
J + 29 = 2829
(J / 4) + 20 = (2800/4) + 20 = 700 + 20 = 720
I = 931
1337 FORMAT(11HFLAG-DFEB0D, I4, 1H-, I3, 10HFDBECDF39D, I3)13370050


→ C’est la définition du FORMAT 1337 :
11HFLAG-DFEB0D → insère littéralement FLAG-DFEB0D
I4 → imprime un entier sur 4 colonnes (2829)
1H- → insère un -
I3 → imprime un entier sur 3 colonnes (720)
10HFDBECDF39D → insère littéralement FDBECDF39D
I3 → imprime un entier sur 3 colonnes (931)


FLAG-DFEB0D2829-720FDBECDF39D931
