file BK
BK: Linux rev 1.0 ext3 filesystem data, UUID=ca014691-c6ea-4a5a-8da4-74a1aa1c9a80

Bon on devra sûrement utiliser autopsy encore ... comme dans le problème dinosaur survive

On trouve cette fois dans autopsy, des fichiers dont 2 supprimés.

Parfois la mémoire n'est pas effacé mais simplement free, et c'est exactement ça que je vais chercher depuis l'onglet Data Unit. Je suis tombé sur les blocs 1229 à 1239 qui semblent être intéressant. Je les ai donc exportés ... Il y a d'autres blocs mais ils sont majoritairement vide donc pas intéressant...

J'ai vu que 1229 et 1230 sont les 2 fichiers intéressants. (1229 est un zip et 1230 est un OpenDocument Drawing)

J'ai d'abord reconstitué et analysé le fichier 1230. On y trouve meta.xml, settings.xml et mimetype. Cependant, ces fichiers ne contiennent aucune information intéressante.

Ensuite, j'ai essayé de unzip le 1229, le problème est qu'on a besoin d'un password ... Je vais essayer de brute force des password

zipinfo m'indique que ce fichier n'utilise pas AES donc je ne pourrai pas tenter pkcrack.

On va tenter une attaque brute force.

zip2john extracted/vol1-Fragment1229.raw > hash.txt

john --wordlist=/chemin/vers/rockyou.txt zip.hash

john --show zip.hash

mot de passe est 12345

7z x extracted/vol1-Fragment1229.raw


On trouve le flag dans secret.txt
FLAG-menummenum
