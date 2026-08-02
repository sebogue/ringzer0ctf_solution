Regarder le code source, on voit clairement un commentaire sur un captcha3.txt

Initialement, j'ai vu que l'image était générée via ce path "captcha/captcha.php?new",
Or le répertoire captcha expose la bibliothèque utilisée qui est cool-php-captcha avec les fonts entre autre.

Parmi ces fonts, j'ai vu que fontawesome-webfont.ttf était probablement celui utilisé et rendait illisible les images captcha. C'est d'ailleurs un font qui n'est pas utilisé dans le code open source sur github.

En regardant dans le captcha3.txt j'ai vu ça:
```php
if (isset($_POST['captcha'])){
    if ($_POST['captcha'] == $_SESSION['captcha']){
        echo 'Congrats, the flag is XXX';
        ...
```
Bon déjà il y a peut être manière de bruteforce avec un dictionnaire quelconque mais encore + simple,

Si on n'a pas de sessions (donc pas de cookies) puis qu'on envoi un captcha vide sur http://challenges.ringzer0ctf.com:10142/captcha3.php comme ça le isset va passer et $_POST['captcha'] est vide ce qui équivaut à NULL. Puis comme $_SESSION['captcha'] n'est pas seté encore alors il est aussi NULL et donc ça imprimera le flag.

On peut delete notre cookie du browser et vider le contenu du captcha et cliquer submit ou envoyer une requete curl comme suit:

curl -X POST "http://challenges.ringzer0ctf.com:10142/captcha3.php" -d "captcha="
FLAG-siLqVmuuEDDFtz9jqIFIAOQmCF