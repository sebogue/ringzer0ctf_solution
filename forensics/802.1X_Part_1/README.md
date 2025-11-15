Je vois du EAPOL dans le fichier pcap, je pense que je peux utiliser un bruteforce.

J'ai essayé plein d'outil pour extraire les données mais rien ne fonctionne.

Or je pense qu'il est possible de faire une attaque hashcat en mode 22000 à partir de rockyou.txt
On doit le faire sur WPA*01*PMKID*ACCESS_POINT_ADRESS*MAC_ADRESS***


Ca ne semble pas fonctionné... cependant je vois que le ssid est Rao likes 1X Movies donc peut être essayé sur une liste de film, possiblement avec des patterns ajoutés comme 123 à la fin.

wget https://datasets.imdbws.com/title.basics.tsv.gz

On va garder que la colonne originalTitle ...
awk -F '\t' 'NR==1{for(i=1;i<=NF;i++) if($i=="originalTitle") c=i} NR>1 && c{print $c}' title.basics.tsv > originalTitle.txt 

Il y a 12M de lignes quand même ... ayoye

Si ca ne marche pas peut etre essayé d'attaquer le 4 way handshake en changeant le contenu de hash.22000 pour un truc avec les Nonce, SSID, MIC, etc ...