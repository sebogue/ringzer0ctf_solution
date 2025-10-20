Password: 76492d1116743f0423413b16050a5345MgB8AEEAYQBNAHgAZQAxAFEAVABIAEEAcABtAE4ATgBVAFoAMwBOAFIAagBIAGcAPQA9AHwAZAAyADYAMgA2ADgAMwBlADcANAA3ADIAOQA1ADIAMwA0ADMAMwBlADIAOABmADIAZABlAGMAMQBiAGMANgBjADYANAA8ADQAZgAwADAANwA1AGUAMgBlADYAMwA4AGEAZgA1AGQAYgA5ADIAMgBkAGIAYgA5AGEAMQAyADYAOAA=

Key: 
(3, 4, 2, 3, 56, 34, 254, 222, 205, 34, 2, 23, 42, 64, 33, 223, 1, 34, 2, 7, 6, 5, 35, 12)

Directement j'ai remarqué que les premiers caractères sont pas typique d'un base64 donc je les ai mis de côté pour l'instant. Le base64 decode en utf-8 m'a donné du n'importe quoi donc j'ai demandé à chatGPT une suggestion ... il m'a dit de décoder en utf-16LE (16 bits et little endian, donc au lieu de 8 bits par char c'est 16)

J'ai obtenu ceci : 2|AaMxe1QTHApmNNUZ3NRjHg==|d262683e74729523433e28f2dec1bc6c64<4f0075e2e638af5db922dbb9a1268

J'ai split sur |

Le 2 est sûrement pour spécifier le nombre d'argument.

La string finissant par == semble encore base64, donc je l'ai decode


# Recherche
J'ai cherché en ligne secure string en me disant que c'était un indice ... un secure string est un objet powershell

Je peux reconstruire un string avec un secure string si j'ai le vecteur d'initialisation (se fait avec AES).

On a la clé (array) de taille 24 donc forcément un AES 192, on a IV et le string encrypté:
d262683e74729523433e28f2dec1bc6c64<4f0075e2e638af5db922dbb9a1268

Ça n'a pas fonctionné à cause du symbole < , chatGPT m'a dit de remplacer le caractère par un autre en me proposant 8. Puis ça a fonctionné

FLAG-5tguasm48

# Commande powershell
```powershell
$enc = "76492d1116743f0423413b16050a5345MgB8AEEAYQBNAHgAZQAxAFEAVABIAEEAcABtAE4ATgBVAFoAMwBOAFIAagBIAGcAPQA9AHwAZAAyADYAMgA2ADgAMwBlADcANAA3ADIAOQA1ADIAMwA0ADMAMwBlADIAOABmADIAZABlAGMAMQBiAGMANgBjADYANAA8ADQAZgAwADAANwA1AGUAMgBlADYAMwA4AGEAZgA1AGQAYgA5ADIAMgBkAGIAYgA5AGEAMQAyADYAOAA="; $key = [byte[]]@(3,4,2,3,56,34,254,222,205,34,2,23,42,64,33,223,1,34,2,7,6,5,35,12); $b64 = $enc.Substring(32); $data = [System.Text.Encoding]::Unicode.GetString([Convert]::FromBase64String($b64)); $parts = $data.Split('|'); $iv = [Convert]::FromBase64String($parts[1]); $ciphertext = [byte[]] -split ($parts[2] -replace '<','8' -replace '(..)','0x$1 '); $aes = New-Object System.Security.Cryptography.AesManaged; $aes.Mode = 'CBC'; $aes.Key = $key; $aes.IV = $iv; $decryptor = $aes.CreateDecryptor(); $plaintext = $decryptor.TransformFinalBlock($ciphertext, 0, $ciphertext.Length); [System.Text.Encoding]::Unicode.GetString($plaintext)
```

Sinon exécuter le script python fait la même chose ...