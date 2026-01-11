# Approche
En analysant le code, on remarque :
```php
srand(time());
$token = rand(1000000000000000,9999999999999999);
```

En faisant un reset du username : admin, on reçoit un message:
Reset password link has been sent to admin@youdontownthisemail.com. Please follow the link http://challenges.ringzer0team.com:10113/?k=[your 16 digits code] soon as possible your token expired in 1 hour. 
Sun, 11 Jan 2026 16:03:30 -0500

Étant donné qu'on nous donne un timestamp et qu'on sait que le seed est un timestamp (srand(time())) on converti la date en un timestamp avec le script php ci-dessous:
```php
<?php
    srand(strtotime("Sun, 11 Jan 2026 16:03:30 -0500"));
    echo rand(1000000000000000,9999999999999999);
?>
```
On a comme output:
6490185595117510

On peut donc faire une requête ici:
http://challenges.ringzer0team.com:10113/?k=6490185595117510

Le résultat de la requête fourni le nouveau password
Here's your new password: Thi%P@s50rD!sM1n3*

On peut ensuite se connecter avec username = admin et password = Thi%P@s50rD!sM1n3* pour obtenir le flag

# Solution
FLAG-DlwwTV7vCQf4Dn281Yhb802x5U