ssh level1@challenges.ringzer0ctf.com -p 10218

Mot de passe: level1

Ça launch un shell avec un code qui est fort probablement parti automatiquement à chaque connection ssh (~/.bash_profile):


Flag is located at /home/level1/flag.txt

Challenge bash code:

while :
do
	echo "Your input:"
	read input
	output=`$input`
done 

Your input:

On va tenter de quitter ce shell interactif en mettant bash comme input. On a un shell bash qui part dans lequel les commandes telles que ls n'affiche rien sur le stdout. Le stdout est détourné. En cherchant en ligne j'ai trouvé cette commande qui force l'affichage sur le stdout: commande > /dev/tty

Donc en faisant :

```bash
cat flag.txt > /dev/tty
```
On obtient le flag:

FLAG-U96l4k6m72a051GgE5EN0rA85499172K
