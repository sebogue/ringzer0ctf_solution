J'ai remarqué une requête get pour obtenir un fichier flag.zip

Et une réponse disant que le mot de passe du zip est : ZipYourMouth

Ça m'indique qu'il doit y avoir un fichier zip à trouver parmi les paquets.

Un fichier zip commence toujours par :
504b0304
et se termine par:
504b0506

Or en faisant : follow tcp stream, j'ai cherché parmi les 3 streams lequel avait la présence de 504b0304 ET 504b0506 , j'ai vu que le stream 0 respectait ceci ... pas le stream 2 (que la présence d'un début de zip 504b0304 mais pas de fin)

Pour faire tout ça j'ai montré les streams en raw (non en ascii) et utilisé la barre de recherche find pour trouver le début et la fin du zip.

J'ai donc copié collé le contenu entre 504b0506 et 504b0304 dans hexed.it en ligne. Enregistré le fichier, 

Ensuite on fait file my_file ce qui indique qu'il s'agit d'une archive zip. On peut ensuite utilisé 7z x my_file pour extraire le contenu (Ne pas oublié le mot de passe plus haut). Ensuite, on peut ouvrir le fichier flag.txt extrait ...

Flag-qscet5234diQ
