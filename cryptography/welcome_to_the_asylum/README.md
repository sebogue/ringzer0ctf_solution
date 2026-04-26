J'ai remarqué que le pincode est sur 4 digit et fait partie de la requête. Alors, j'ai brute force les requêtes pour trouver le bon pincode via script.py

Le pincode trouvé est 1234

Puis le serveur retourne:

<div class="flag">
	<p> Congratulations you found the flag!! </p>
	<p> The encryption key is the same for the cookie and the flag </p>
	<table style="padding: 10px; width: 690px; color: black; font-weight: bold">
		<tr>
			<td>Encrypted Flag:</td>
			<td>LtmkVWJP33Hxy8saEn19wVb9+LgmoRsAfP0l11sM0A==</td>
		</tr>
		<tr>
			<td>Flag md5:</td>
			<td>ebc3dfd5915d86a48d42564b8e05dc15</td>
		</tr>
	</table>
</div>


Sachant que les flags commencent par FLAG-
J'ai fais un XOR entre les cookies que je reçois et FLAG-

On remarque que ça donne un résultat plaintext qui sont différent entre chaque requête:
time=... (un timestamp)
usern... (probablement pour username ici)
r=   ... (une valeur hexadécimale random)

usern il manque ame pour former username donc on trouve que ça correspond à FLAG-8g5G

Ensuite on remarque clairement un timestamp assez proche de mon horloge (avec un décalage car le serveur est situé ailleurs)

Mais au moins j'ai l'heure et les minutes, donc je peux bruteforce les secondes et observer le username le plus probable pour les 60 choix.

Je remarque un username qui est 1234 comme le pincode donc je peux ajouter de nouveaux caractères au flag.

FLAG-8g5GytNT

Je vois ensuite que r est une valeur random suivi de | (un séparateur)

J'ai donc supposé que le flag est encrypté avec ce format: "time=HH:MM:SS|username=1234|r=XXXX"

Avec mon script2.py je bruteforce pour trouver la valeur aléatoire r

FLAG-8g5GytNTJEygRlFIYaSpqkdYiB