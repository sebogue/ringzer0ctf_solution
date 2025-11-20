ssh level2@challenges.ringzer0ctf.com -p 10127

Mot de passe: FLAG-1Ql864uTj8pY2470t85VX42q1B


En gardant la même logique que l'assembleur de la question précédente, on remarque cette erreur:
    Shellcode received...
	Shellcode length (84) bytes.
	Success: Executing shellcode...
	Error: Bad char or buffer too big. Cannot execute shellcode.

Cette fois on essaye d'ouvrir un shell à la place de faire un directement un open comme au problème d'avant.

Le fonctionnement reste le même pour docker (voir question précédente)

chatGPT m'a arrangé le code pour un /bin/sh en assembleur
FLAG-351p97Rd81169t7d4904K6031S
