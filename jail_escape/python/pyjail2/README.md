ssh pyjail2@challenges.ringzer0ctf.com -p 10098

Mot de passe: ibrbVv6kAEHnR4Shpq8y

>shell.cat(shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][45:51])
>
Executing sandbox
.. is sanitized. :)
>

Bon il y a un sanitizing qui a lieu

shell.cat(shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][46]+shell.help.im_func.func_code.co_consts[3][45:51])


>print shell.help.im_func.func_code.co_consts
>
Executing sandbox
(None, 'help:', '  This script run as pyjail3.', '  Find a way to print this file /home/pyjail3/.pass')


print shell._validateUserInput.im_func.func_code.co_filename
>
Executing sandbox
/home/pyjail2/pyjail2.py
>

On semble être dans pyjail2 au lieu de pyjail3

Pas encore terminé ...