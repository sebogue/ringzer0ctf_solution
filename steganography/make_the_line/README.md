On a une image jpg sur laquelle j'ai éventuellement fait un binwalk

binwalk -e f0ddce75e8d0bad94273d9595a8210fd.jpg

On obtient une image et un flag.txt.gpg

En faisant file sur celui ci j'ai obtenu:
flag.txt.gpg: PGP RSA encrypted session key - keyid: EC6C8BA8 8B76173E RSA (Encrypt or Sign) 1024b .


Aussi:
strings f0ddce75e8d0bad94273d9595a8210fd.jpg

Donne:
-----BEGIN PGP PRIVATE KEY BLOCK-----
Version: GnuPG v2.0.14 (GNU/Linux)
lQH+BFMJmU0BBAC7J3IMTZRiWsK9KlFC/UXQ1p5XerK2z2u3UqoZuHJfEKY81HNK
6kd6Ar134Mc80ItJl0JGdCgt56zNO68PHvLpLMTm3N6vjUUhEW4sJYbRQqk8AD5c
HKT5Hfb+WGGzPC4ZYqqmS39YNmx829Y58mDCKQX1uWAHh60Y1vUclZUp9wARAQAB
/gIDAhOLmBU0A0WY0PNdHjFHSA8M2efZJa2m/J0wIuBOQh2F1GFn3clu88fgh/uv
MwHNErzdP81oPZydnfntDUSX06l69jlc2JeLPbF5r8ndvyAmMzK9dWecB/wymjTy
DwyvQbevHAfwak30Ih3xmk6WzsTyLh9oUrAR9D6c9uDM+ce4H6Rpaz749cMiHHqC
jJh0qhDSPfSrps+gWUVbewVH0nl6JO1eUZCyEYv+GzbrwMvvzB6DKmPddWC/RUhM
rPArGLDNA7nuiErNfKPH5WxplFNgL/w8wN2JEX5WcseO3ky5RuyKNVcneDd1Ix+D
zCfXQM278P/1094/AllOEYRlyrzP/Mze6uu+5PcNEWmZbkOosFlIdL9fOiKn1kWC
9F8QGMBP5zw0VUXQXbhyJMf7QJDOHUyQWgODhvk+AI1T22sIzRowLAlxjqP45kkk
qANODqTHM4TPUpzUNsXZUn62n7jeOSXNlkBAgLM6hKAStB1zdGVldmUgKHN0ZWV2
ZSkgPHN0ZWV2ZUB0ZXN0Poi4BBMBAgAiBQJTCZlNAhsDBgsJCAcDAgYVCAIJCgsE
FgIDAQIeAQIXgAAKCRCqYfmAxT1btofZA/9gulteMQ5X2dre41sxrsMqm4Js6HPx
CwxpX99VjilkHAKCXJSnqU7JqWoFzPpyrTBtS29VoXXuFOpzL8BxYnzDoP+Q3Ybl
kq86zt4E+ryTtiaxgbSKT+BVAIp8AaIuAIWIS7pIzyacMDnEWui8GwgxBhPN/3Tu
Oi7oRetOVpDRcp0B/gRTCZlNAQQA7wnoBWSrppeWx5q0cC3G47eaXM32weHX1Kqy
Lw/Q+plHSThniy6kNEoiNBTd3pT8mIMCzz613EUwHbd2dDXf5zC8gds4Iveop+44
MgKInG8io2KYtXQOaRN5ivcD6ccjsp0t/5i7FjSH6XU14KzENJW0CQBPAgdoLmW/
+OTKVBcAEQEAAf4CAwITi5gVNANFmNBcvRhALhfr9KSDntvXJ0y3X8nAoCyInWW2
cmGgD2FTttpqskxKFpH7a0y0JtqMCMye3/EYtlEUFbASL1zHMNh2KAIRZeXmcsdt
a8me78xc3wNjyC0J4xHFqs3UBt9XhqxmaubjisEz2J6apqfMVS+TrP5dTF9N46Sl
LTBSXhwOKMlR+1HILiSBuNHuDPR757+jT/aUzSSqYSdUSipsHx6k8FCKhfBhnpJq
k6dNNjweYJWaV9n9ZHLSpsZBwJj9STy0lXvTURK9EjPJrwIJbN+BDl2ipftWsEbm
D8OjjOHWY7YjDwe/X9U46W5Z2sfgMS0NBR+uS+v8MA+ww3Ez+ND3vwT+MAGMU55a
F7G9URgZQiBOgrr1OX8657t0N9KynkSKPUXVgrU0V93UAWdE/hplxy3Im1zeU0fL
ntwC/Pa6lVJk11Rizs/laJIerhjpGwn1I6J6bt+B2m4aRDVUAkSUJTKnq4ifBBgB
AgAJBQJTCZlNAhsMAAoJEKph+YDFPVu2M9oEALT4GOGNKlVV5j+JzGhG+OP1ojru
CVe7InSEtVUdQKeN4w/1myoz0SbAm+jGIFz4TFoZ+rP2d8DcBtqGFiwXzL9MaDnT
Y4Nb6ts5capH8OEp6MOPxssIiNa3W6dIqucWSVVnCm2PAU+q2Q22PFe/+wZyRNtS
vkwFlWNWJ2oR7DdF
=vDAR
-----END PGP PRIVATE KEY BLOCK-----

Je créé donc un fichier avec cette clé. MAIS attention, il faut ajouter un carriege return après Version: GnuPG v2.0.14 (GNU/Linux)

En essayant un import :
gpg --import key.gpg
Ça demande un mot de passe ... 

On va faire une attaque par dictionnaire donc. chatGPT me dit d'installer gpg2john pour pouvoir faire l'attaque.

Il faut installer john-jumbo
et personnellement mon gpg2john se situe dans /usr/local/opt/john-jumbo/share/john/gpg2john


Ensuite faire :
gpg2john key.gpg > gpg.john

Suivi de :
john --format=gpg gpg.john --wordlist=chemin/vers/rockyou.txt

john --show gpg.john
steeve:1234:::steeve (steeve) <steeve¾test>::key.gpg

1 password hash cracked, 0 left


Donc le mot de passe est 1234
On peut essayer 
gpg -d extractions/f0ddce75e8d0bad94273d9595a8210fd.jpg.extracted/1BAD77/flag.txt.gpg 
et mettre 1234 comme mot de passe

FLAG-f9f$9{!-_4F"+