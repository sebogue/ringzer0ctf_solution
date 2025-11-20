Avec la commande steghide info 3e634b3b5d0658c903fc8d42b033fa57.jpg
Je remarque :
fichier à inclure "flag.txt":
    taille: 29,0 Byte
    cryptage: rijndael-128, cbc
    compression: oui

Il doit y avoir un fichier flag.txt à extraire donc:
steghide extract -sf 3e634b3b5d0658c903fc8d42b033fa57.jpg

On obtient un fichier avec le flag:
FLAG-5jk682aqoepoi582r940oow
