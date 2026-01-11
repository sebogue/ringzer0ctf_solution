ssh morpheus@challenges.ringzer0ctf.com -p 10148

Mot de passe: VNZDDLq2x9qXCzVdABbR1HOtz


cat /etc/fstab
LABEL=rootfs  /         ext4  defaults  0 0
LABEL=UEFI    /boot/efi vfat  defaults  0 0
#//TheMAtrix/phone  /media/Matrix  cifs  username=architect,password=$(base64 -d "RkxBRy0yMzJmOTliNDE3OGJkYzdmZWY3ZWIxZjBmNzg4MzFmOQ=="),iocharset=utf8,sec=ntlm  0  0


echo RkxBRy0yMzJmOTliNDE3OGJkYzdmZWY3ZWIxZjBmNzg4MzFmOQ== | base64 --decode
FLAG-232f99b4178bdc7fef7eb1f0f78831f9