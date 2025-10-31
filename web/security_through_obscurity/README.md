J'ai ouvert les cookies depuis chrome. J'ai vu un AUTH que je ne voyais pas avec les problèmes précédents.
Il semble être en base64. Donc en le décodant on obtient:

guest,3e9ececd24b6f5da,1761011511,false:3d7937fcc00ade12c5f6e99f350e2e4e

On peut essayer de base64 encode 
admin,3e9ececd24b6f5da,1761011511,false:3d7937fcc00ade12c5f6e99f350e2e4e

On obtient ce message : Look's like someone is trying to hack our system (Invalid MD5).

Donc la dernière partie est probablement un md5 (32 caractères) et j'hésitais sur 3e9ececd24b6f5da, potentiellement un salt. Mais en testant ceci intact: guest,3e9ececd24b6f5da,1761011511,false, le md5 donnait 3d7937fcc00ade12c5f6e99f350e2e4e donc 3e9ececd24b6f5da n'est pas un salt mais un genre de ID.

On essaye avec 
admin,3e9ececd24b6f5da,1761011511,false:Le_hash_que_ca_donne

On obtient Expired cookie. (1761011511 est dans le passé donc la session est expiré)

Bon on va changer le timestamp pour un temps futur et aussi tant qu'à y être mettre true (c'est probablement la valeur à mettre au lieu de false).

admin,3e9ececd24b6f5da,9999999999,true:Le_hash_que_ca_donne
Le_hash_que_ca_donne=ad0e89d585c897dd1cf320b0fcd572e3

On le base64 encode et on le remplace dans le fureteur

FLAG-Feg03OSzWhxO03K94108100f

