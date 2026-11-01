Il s'agit d'un jeu tic tac toe, contre un algorithme.

En lançant le script, j'ai remarqué que c'est pas mal long, je soupçonne que le code a beaucoup de sleep.

J'ai donné le script a une IA, qui m'a dit que l'algorithme est celui d'un IA minmax. Puis apparemment c'est impossible à battre lorsque bien programmé. Par contre, dans la description du problème, on y voit un commentaire comme quoi il a été battu 1 fois.

Ca indique qu'il y aurait une combinaison gagnante (voir +), sûrement parce que l'algo a une faille.

Puis normalement c'est déterministe comme algorithme (c'est à dire qu'il produit toujours la même solution)

Il y a des sleep partout dans le code que je peux supprimer. Ca va me permettre de faire un brute force sans avoir des grosses attentes.

En faisant un objdump du fichier, je vois qu'il faudrait faire des nop sur 

On va tous les changer pour des nop 90 avec
```sh
python3 -c "
with open('reindeer_game', 'rb') as f:
    data = f.read()
data = data.replace(b'\x48\x3b\x6b\x28\x78\x78', b'\x90\x90\x90\x90\x90\x90')
with open('patched_reindeer_game', 'wb') as f:
    f.write(data)
"
```

On peut maintenant avec mon script plus bas générer des moves aléatoires jusqu'à battre l'AI.
```python
from pwn import *
import time
import random

def trouver_coup_adversaire(grille_buffer, coups_possibles):
    lignes = grille_buffer.split(b'\n')
    
    case_actuelle = 1
    # Les lignes 1, 5 et 9 contiennent les cases du morpion
    for num_ligne in (1, 5, 9):
        # Découpe la ligne selon le séparateur de grille '│'
        cases = lignes[num_ligne].split(b'\xe2\x94\x82')
        for case in cases:
            if b' O ' in case:
                if case_actuelle in coups_possibles:
                    coups_possibles.pop(coups_possibles.index(case_actuelle))
            case_actuelle += 1
            
    return coups_possibles

def jouer_une_partie():
    processus = process('./patched_reindeer_game')
    
    processus.recvuntil('shortly')
    processus.recvuntil(' ')
    
    coups_possibles = [ 1, 2, 3, 4, 5, 6, 7, 8, 9 ]
    historique_coups = ''
    
    while(1):
        grille_buffer = bytearray(b'')
        for i in range(0, 12):
            grille_buffer += (bytearray(processus.recvline()))
            
        coups_possibles = trouver_coup_adversaire(grille_buffer, coups_possibles)
        reponse_binaire = processus.recv()
        
        if b'X' in reponse_binaire:
            # OPTIMISATION : Si c'est le premier coup, on force la case 2 (si elle est libre)
            # comme ca on a moins d'exploration et donc une solution + rapide.
            if historique_coups == '' and 2 in coups_possibles:
                coup_choisi = 2
                index_coup = coups_possibles.index(2)
            else:
                # Sinon, on garde ta logique random d'origine
                index_coup = random.randrange(len(coups_possibles))
                coup_choisi = coups_possibles[index_coup]

            processus.send(str(coup_choisi) + '\n')
            time.sleep(0.01)
            historique_coups += '[' + str(coup_choisi) + ']'
            coups_possibles.pop(index_coup)
            
        if b'lose' in reponse_binaire or b'Draw' in reponse_binaire:
            print('lose/draw')
            processus.close()
            break
            
        if b'win' in reponse_binaire:
            print(historique_coups)
            processus.close()
            exit(1)
            
        try:
            processus.recvuntil('...')
        except:
            pass

while(1):
    jouer_une_partie()

```

J'ai ceci relativement rapidement.
```
[2][8][6][7][9]
```

FLAG-Glide_into_AI_Victory_9a3b4af8