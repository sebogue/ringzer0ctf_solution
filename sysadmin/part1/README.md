ssh morpheus@challenges.ringzer0ctf.com -p 10089

Mot de passe: VNZDDLq2x9qXCzVdABbR1HOtz

En cherchant les process qui run, on tombe sur cette ligne:

ps -aux
root         416  0.0  0.0   2608   444 ?        S    May29   5:40 /bin/sh /root/backup.sh -u trinity -p Flag-7e0cfcf090a2fe53c97ea3edd3883d0d

