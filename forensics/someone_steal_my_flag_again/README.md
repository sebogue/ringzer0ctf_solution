Je savais où regarder en me fiant au problème précédent ... Les paquets ICMP.

Certains des paquets ont 48 bytes de data et d'autres en ont que 8. J'ai donc exporté les données des packets ICMP avec seulement 8 bytes. La particularité de ces packets est que leur sequence number sont vraiment random. Habituellement les sequence number sont 1 2 3 4 5 6 ... donc ça ne semble pas normal.

Après un certain temps j'ai finalement trouvé la solution. Il faut faire le XOR entre les sequence number et la valeur de data. (le sequence number sous forme cyclique)

eb11d60a9f10cc59 XOR bf79bf79bf79bf79 = 5468697320697320
c6d1c5c1c784d6cb XOR b5a4b5a4b5a4b5a4 = 737570657220636f
0a3d0d3f01351032 XOR 645b645b645b645b = 6e666964656e7469
47e007ac60c067cb XOR 268c268c268c268c = 616c2120464c4147
5ef640f14b8842f2 XOR 73c273c273c273c2 = 2d343333384a3130
d8f2ab8bad80e0ad XOR 9ac29ac29ac29ac2 = 4230314937427a6f
f7d395ae93d0a9e6 XOR c19fc19fc19fc19f = 364c5431524f6879
986b986b9817ed03 XOR a85ba85ba85ba85b = 30303030304c4558
chacun de ces codes résultants donne en ascii:

This is super confidential! FLAG-4338J10B01I7Bzo6LT1ROhy00000LEX

Ça ne fonctionnait pas ... mais j'ai finalement enlevé la traînée de 0 et obtenu le bon flag.

FLAG-4338J10B01I7Bzo6LT1ROhyLEX
