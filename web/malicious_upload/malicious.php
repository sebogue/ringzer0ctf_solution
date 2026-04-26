<?php
    $files = scandir('.');
    foreach ($files as $file) {
        echo $file . "<br>";
    }
?>