#include <iostream>
#include "sample.hpp"

int main(void)
{
	//declaration d'une instance (variable)
	Sample instance;
	// declaration d'un pointeur sur une instance de la calss == pointeur classique
	Sample* instancePtr = &instance;

	// declaration d'un pointeur sur un attribut memebre de type entier de la class Sample
	int Sample::*p = NULL;
	void (Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "instance.foo: " << instance.foo << std::endl;

	// on assigne la valeur 21 au contenu du poointeur p de l'instance instance
	instance.*p = 21;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instancePtr->*p = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancePtr->*f)();
	return 0;
}