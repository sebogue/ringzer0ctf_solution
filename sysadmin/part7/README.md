ssh neo@challenges.ringzer0ctf.com -p 10091


Mot de passe: FLAG-314df4d411ae37f16f590f65da99f3b6

J'ai regardé en ligne j'allais pas dans la bonne direction ...
Il fallait regarder les process:
ps -fl -u neo

F   UID     PID    PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
5  1005 4153495 4153473  20   0  14060  5988 -      S    ?          0:00 sshd: neo@pts/0
0  1005 4153496 4153495  20   0   9836  4028 do_wai Ss   pts/0      0:00  \_ -bash
0  1005 4153944 4153496  20   0  11488  3248 -      R+   pts/0      0:00      \_ ps fl -u neo
4  1005 4138010 4138007  20   0   2344   336 hrtime Ss   ?          0:00 /bin/monitor
4  1005 4138005       1  20   0   2344   268 hrtime Ss   ?          0:00 /bin/monitor
4  1005     467       1  20   0  18376  3588 ep_pol Ss   ?          0:28 /lib/systemd/systemd --user
5  1005     469     467  20   0 102740  2860 -      S    ?          0:00  \_ (sd-pam)
neo@sysadmin-track:~$ strace -p4138005

Attendre un peu et le flag s'affichera

FLAG-a4UVY5HJQO5ddLc5wtBps48A3