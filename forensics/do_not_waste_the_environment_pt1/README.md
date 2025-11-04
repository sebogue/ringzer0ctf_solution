Le fichier semble être un fichier memory dump d'windows. Le titre du problème contient environment. Donc probablement qu'il faudra analyser les variables d'environnements dans le RAM memory dump. J'utiliserai volatility pour ce faire. J'aurais pu aussi utiliser rekall mais ça prendrait de vieille version de python.

## Setup
```bash
python3.9 -m venv ~/rekall-env
source ~/rekall-env/bin/activate
pip install volatility3
```

## Exécution
```bash
vol -f 5bd2510a83e82d271b7bf7fa4e0970d1 windows.envars > envar.txt
```

En regardant ligne par ligne le fichier envar.txt j'ai trouvé une ligne intéressante:
f l a g - 66d7724d872da91af56907aea0f6bfb8

FLAG-66d7724d872da91af56907aea0f6bfb8