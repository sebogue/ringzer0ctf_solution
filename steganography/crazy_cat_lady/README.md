J'ai utilisé stegsolve sur l'image et j'ai vu les caractères du flag

J'ai remarqué que sur panel 2 et panel 1 de rouge vert et bleu on a respectivement des caractères, un chat, un autre chat. J'ai pensé directement à xor (car ça fait un flip quand on a 00 ou 11) entre les images pour enlevé le chat brouillé sur les images avec des caractères. Donc voici ce que j'ai trouvé


img1 = r1^g1^b1
img2 = r2^g2^b2

On voit que img1 et img2 on des caractères bien mieux lisibles et combiner img1 à img2 donnerait le flag en entier dans une image plutôt que 2 images donc on fait un simple and logique et on obtient le flag

FLAG-cYNUSHmeSBWvyNw9fe1iyhsaYZivCJLj

