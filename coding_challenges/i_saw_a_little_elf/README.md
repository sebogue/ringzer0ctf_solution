# Elf ?
Il doit s'agir d'un fichier exécutable ELF. Premier string obtenu est un base64 donc je le décode. 

Cependant, parfois plusieurs décodage de base64 successif doivent être appliqué.

Une fois qu'on ne peut plus décoder le base64, on a des bytes en little endian finissant avec FLE => ELF 

Il faut donc inverser les bytes puis écrire en mode write binary (wb) dans un fichier.

Étant donné que je suis sur mac, je me suis fais un dockerfile avec une image ubuntu pour exécuter le ELF

## Commande pour build
```bash
docker build -t elf-runner .
```

Dans le dockerfile j'ai ajouté tout pour que python fonctionne et s'exécute comme dans un environnement capable d'exécuter des fichiers elf.

Pour partir le code dans docker, il faut ouvrir docker desktop, s'assurer que le "engine" est en mode running.

Ensuite exécuter la commande suivante 

```bash
docker run --rm elf-runner
```