#include <iostream>
/*step 1*/
// int max(int x, int y)
// {
// 	return (x >= y ? x : y);
// }

/*
step 2
On definit un quelconque T
si on utilise plusieurs fois T c'est un meme type
*/
// T max(T x, T y)
// {
// 	return (x >= y ? x : y);
// }

/*
step 3
on ajoute le mot cle template avec la synthaxe
template<typename T >
ou T est le nom du type qui peut etre ce que l'on veut
*/
// template<typename T >

// T max(T x, T y)
// {
// 	return (x >= y ? x : y);
// }

/*
step 4
on passe des reference (&) car il peut s'agit d'instance de classe ou un operateur utiliser dans le template serait surcharger
*/
// template<typename T >

// T max(T & x, T & y)
// {
// 	return (x >= y ? x : y);
// }

/*
step 5
si le template ne modifie pas les instance (les donnees), on les met alors en const pour le retour de la fonction et les argument
*/
template<typename T >

T const & max(T const & x, T const & y)
{
	return (x >= y ? x : y);
}