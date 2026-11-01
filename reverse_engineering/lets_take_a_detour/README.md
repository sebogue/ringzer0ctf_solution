J'ai décompilé le programme avec Hex-rays

Le fonctionnement du programme:
main est anti-debug et pose un hook inline sur CreateThread qui redirige vers sub_4013B0. Ca remplit aussi le buffer attendu avec les 13 octets E5 E3 E3 E1 EF B5 E7 E3 B1 B3 B3 B5 B2.

sub_4013B0 demande le mot de passe. Elle en garde une copie en clair des 13 octets, puis XOR le buffer Block avec l’octet de poids faible de time(). Elle appelle ensuite le vrai CreateThread.

StartAddress installe un handler d’exceptions, XOR les octets 0 à 2 de Block avec 0xD3, puis écrit à l’adresse 0 pour provoquer une exception.

Le premier passage dans Handler XOR les octets 3 à 12 avec 0x85 et redirige l’exécution vers sub_4013A0. Cette fonction écrit à son tour à une adresse invalide, ce qui déclenche une deuxième exception.

Au deuxième passage, Handler XOR de nouveau Block avec time(). Comme les deux appels tombent dans la même seconde (ou presque), les deux XOR avec time() s’annulent. 

Le programme compare alors Block au buffer attendu et, si tout correspond, affiche byte_41A2D8[k] ^ mot_de_passe[k].


donc :
E5E3E3E1EFB5E7E3B1B3B3B5B2 XOR D3D3D385858585858585858585

Le flag en char donne :
7341097425496