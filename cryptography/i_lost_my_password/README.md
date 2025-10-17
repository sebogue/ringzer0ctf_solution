# Mes étapes de résolution
J'étais perdu au début car je ne connais quasiment rien sur windows policies. J'ai donc cherché le mot clé password dans les fichiers lisibles et je suis tombé sur cpassword=PCXrmCkYWyRRx3bf+zqEydW9/trbFToMDx6fAvmeCDw dans Groups.xml:

J'ai par la suite cherché en ligne ce qu'est cpassword et apparemment c'est un mot de passe encodé avec la même clé AES pour tous les mots de passes de windows avec GPP (group policy preferences). Cette clé est d'ailleurs accessible car elle a déjà été publié en ligne. information : https://ahmed-tarek.gitbook.io/security-notes/pentesting/net-pen/active-directory-pentesting/post-compromise-attacks/gpp-cpassword-attacks


Voici la clé (https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-gppref/2c15cbf0-f086-4c74-8b70-1f2fa45dd4be) :
 4e 99 06 e8  fc b6 6c c9  fa f4 93 10  62 0f fe e8
 f4 96 e8 06  cc 05 79 90  20 9b 09 a4  33 b6 6c 1b

AES étant un algo symétrique, on peut appliquer l'opération inverse. 

1. décoder en base64 le mot de passe
2. appliquer l'algo decrypt AES avec la clé connu

*** En essayant de décoder en base64 je suis tombé sur un bug.
Apparemment il faut que la taille de la chaîne soit multiple de 4.
Il faut donc ajouter des paddings de = (2 = à la fin dans mon cas) 

Résultat
LocalRoot!