Directement en ouvrant wireshark, j'observe une requête SQL uri encoded.

En la décodant on obtient :
id=1 AND ORD(MID((SELECT IFNULL(CAST(CHAR_LENGTH(schema_name) AS CHAR),0x20) FROM (SELECT DISTINCT(schema_name) FROM INFORMATION_SCHEMA.SCHEMATA LIMIT 0,1) AS pxqq),1,1))>48


Donc clairement on va aller voir la réponse à la requête, je vois des was found et parfois was not found. C'est un peu comme une analyse des paquets d'une injection SQL...

Je vais faire un script qui va regarder les réponses aux requêtes et reconstituer le flag.