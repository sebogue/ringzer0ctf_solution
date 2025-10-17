Ce problème est très difficile...

J'ai trouvé une solution en ligne.

On commence avec ?.?.?.?.?.?.
Comme ça la condition n va retourner vrai

On y va par paire en commençant avec la première,
Quand on trouve un paire satisfaisant la contrainte m alors ça retournera vrai (m && n)

pour la première paire xy (lors de la première batch), on essaye tous les caracères sur y pour un caractère x donné. Si rien ne fonctionne alors change x pour le prochain caractère et recommence jusqu'à satisfaire la contrainte. 

(ici il n'y qu'une seule paire qui respecte les contraintes)

Essaye ensuite pour la 2e batch donc les 2 prochains caractères. Cette fois par contre le test se fera en passant par 2 conditions :

if (Batch >= 0) m = a === b; // la première
ET
if (Batch >= 1) m = b === c && c === d; // La deuxième

Donc il y a un genre de propagation de contrainte qui se fait ici. 

Le code est simple vu que la batch 0 n'a qu'une seule possibilité ce qui doit probablement réduire l'espace des possibilités de la batch suivante (1 seule possibilité aussi) et ainsi de suite. 

Imaginons le cas où il y avait 3 possibilités à la batch 0, alors là il aurait fallu faire un backtrack sur les prochaines batch ...