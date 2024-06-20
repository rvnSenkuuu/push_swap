Push_Swap

Trier les nombres (int) donner en arguments en utilisant deux stacks a et b.
En utilisant les instructions (a coder sois meme)

sa: swap les 2 premiers elements de la stack a
sb: swap les 2 premiers elements de la stack b
ss: effectue sa et sb en meme temps

pa: prend le premier element de la stack b et le met sur a (ne fait rien si la stack b est vide)
pb: prend le premier element de la stack a et le met sur b (ne fait rien si la stack a est vide)

ra: place le premier element de la stack a en derniere position
rb: place le premier element de la stack b en derniere position
ra: effectue ra et rb en meme temps

rra: l'inverse de ra place le dernier element de la stack a en premiere position
rrb: l'inverse de rb place le dernier element de la stack b en premiere position
rra: effectue rra et rrb en meme temps

Todo:

-Creer deux stacks a et b et les initialiser a NULL
-Gerer les deux cas d'input:
	-./push_swap 4 6 2 1 3 OU ./push_swap 4 2 "8 0 1" en utilisant split
-Rajouter les nombres dans la stack_a, check les input:
	-Renvoyer la fonction ft_error et free la stack_a si:
		- INT_MIN >= arguments <= INT_MAX
		- syntax error: ./push_swap 7 6 one 9 0 (signe - + accepter)
	- Si l'argument est une chaine de caractere utiliser atol pour convertir les arguments en long int
	-Si l'input est correct le rajouter a la stack_a
-Check si la stack_a n'est pas deja trier sinon:
	-Si le nombre d'argument est de 2 faire un swap simple
		-Sinon si le nombre d'argument est de 3 appeler la fonction pour faire un tri de 3
		-Sinon implementer Turk Algorithm
-Free stack