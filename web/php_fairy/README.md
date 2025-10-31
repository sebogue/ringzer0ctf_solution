Merci claude.ai ...

1. Le hash MD5 de `"admin1674227342"` donne quelque chose comme : `0e[chiffres...]` (32 caractères)

2. Tu envoies un autre string au format `0e[chiffres...]` (32 caractères aussi)

3. **Première vérification** `$_GET['pass'] == $pass` :
   - PHP voit `0e...` des deux côtés 0 exposant whatever = 0 toujours
   - Convertit en notation scientifique : `0 == 0`
   - retourne vrai

4. **Deuxième vérification** `$pass !== $_GET['pass']` :
   - Comparaison stricte de strings
   - `"0e123456..."` !== `"0e789012..."`
   - retourne vrai

5. **Troisième vérification** `strlen($pass) == strlen($_GET['pass'])` :
   - Les deux font 32 caractères
   - retourne vrai

donc essentiellement == (ou !=) fait une comparaison avec conversion implicite sur les types donc fera un calcul de 0 exposant ... ce qui vaut toujours 0 et le md5 de admin1674227342 commence aussi avec 0 exposant ... ce qui vaut toujours 0
et !== (ou ===) fait une comparaison littéralement du contenu (string)