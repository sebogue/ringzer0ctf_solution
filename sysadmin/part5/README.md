ssh oracle@challenges.ringzer0ctf.com -p 10149

cat encflag.txt.enc 
U2FsdGVkX1/tRRmR6Av0LbIcKc7ixjz6b4vwkLpEBqYwnLtbFHkbslPUO6RZYfus
15eoo6cJiKfiLSD6KPHiyQ==

Or en travaillant localement, je trouve ceci:   
echo U2FsdGVkX1/tRRmR6Av0LbIcKc7ixjz6b4vwkLpEBqYwnLtbFHkbslPUO6RZYfus15eoo6cJiKfiLSD6KPHiyQ== | base64 --decode > bs64
file bs64 
bs64: openssl enc'd data with salted password


Bon je me suis dis de tenter un bruteforce mais ... j'avais pas remarqué la commande ici:
ls -alt
cat .bashrc

et dans le .bashrc on remarque:
alias reveal="openssl enc -aes-256-cbc -a -d -pbkdf2 -in encflag.txt.enc -k 'lp6PWgOwDctq5Yx7ntTmBpOISc'"

or on a simplement à écrire reveal dans le terminal et on a le flag:
FLAG-54e7f8d0ea560fa7ed98e832900fc45b