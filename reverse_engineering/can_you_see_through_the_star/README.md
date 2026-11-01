```bash
file ff5749e901595df1b04c3055d64df615.exe
```
```
executable (GUI) Intel 80386 Mono/.Net assembly, for MS Windows
```

Je n'ai aucune connaissance en fichier exécutable windows encore moins en .Net

J'ai trouvé en ligne un outil sur github qui sert à décompiler des fichiers .Net appelé dnSpy.

Ca me permet ainsi de lire un code c# (ou autre) associé à un programme compilé

Quand on lance l'exécutable, ça affiche le flag caché avec des *

En ouvrant l'exécutable dans dnSpy:
![alt text](<image.png>)

Donc on reconstitue le flag assez facilement.

FLAG-maskedTextBox1vcbutton1