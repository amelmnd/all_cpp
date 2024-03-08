#include "sample.hpp"
#include <iostream>

int main(void)
{
	//ici on est a l'exterieur de la class
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

//membre privee genere une erreur a la compilation
	// instance._privateFoo = 42;
	// std::cout << "iinstance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
//membre privee genere une erreur a la compilation
	//instance._privateBar();

	return 0;
}