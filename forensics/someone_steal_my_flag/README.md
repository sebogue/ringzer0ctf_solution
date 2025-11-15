Le pcap a plusieurs paquets qui n'ont jamais été envoyé (ce sont des paquets ICMP en vert dans wireshark). En analysant les paquets, j'ai tenté de décoder leurs contenus (hex vers ascii d'abord), ça donnait un base64. Donc j'ajoute à ça le décodage base64 puis j'ai trouvé le flag.

FLAG-FT47cMX26pWyFSI6RPWaSr5YRw