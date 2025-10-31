# Étapes
1. Vérifier le fichier avec la commande : file 86b265d37d1fc10b721a2accae04a60d

On voit que c'est : Linux rev 1.0 ext2 filesystem data (mounted or unclean)

2. Essayer d'extraire des informations via binwalk : binwalk -e 86b265d37d1fc10b721a2accae04a60d

On a maintenant 3 image jpg mais je n'ai pas réussi à extraire d'informations.

3. Exécuter la commande strings 86b265d37d1fc10b721a2accae04a60d | grep FLAG
Ca va chercher à former des chaine de caracteres visibles depuis le fichier donné. 

FLAG-ggmgk05096