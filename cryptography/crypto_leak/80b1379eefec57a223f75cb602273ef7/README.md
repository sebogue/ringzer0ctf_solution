# Recherche
J'ai donné à chatGPT la fonction rc8. Il m'a dit qu'il s'agissait d'un algorithme LFSR (linear feedback shift register). J'ai cherché en ligne comment décrypter un fichier encrypter par algorithme LFSR et le résultat : Berlekamp massey. J'ai regardé une vidéo sur youtube qui explique comment fonctionne Berlekamp massey https://www.youtube.com/watch?v=03sogD-EaJY

Brièvement, Berlekamp massey essaie de trouver une relation linéaire entre les bits successifs pour prédire toute une séquence à partir d’un nombre minimal de bits. On se doute bien qu'il s'agit d'un fichier wav et on sait par quel bytes commence les fichiers de type wav. Donc l'algorithme tentera de trouver une relation linéaire ayant généré transcript.wav.enc sachant que le fichier original commence par RIFF ... une série de byte représentant la taille du fichier - 8 byte ... WAVEfmt 


L'algorithme est réversible (xor) donc il sera facile de retrouver l'original une fois la clé et le seed obtenu.


Well done check the file metadata ... On trouve le flag:
FLAG-ccfd9b48a255a25e2557373e429d9dc5