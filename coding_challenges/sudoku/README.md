Le problème ici est qu'on a un refus du PTY donc on ne peut pas utiliser pexpect comme au problème précédent (number game). Il faut utiliser Paramiko.

Concept de backtrack pour résoudre un sudoku: https://www.youtube.com/watch?v=G_UYXzGuqvM

Étant fan de sudoku, j'avais déjà dans le passé conçu l'algorithme. Au lieu de faire toutes les combinaisons, on backtrack lorsqu'une condition n'est pas respecté pour éviter de continuer sur le mauvais chemin. C'est souvent l'astuce lorsqu'on fait fasse à un problème de combinatoire et très répendu dans certains outils de programmation par contrainte comme minizinc.