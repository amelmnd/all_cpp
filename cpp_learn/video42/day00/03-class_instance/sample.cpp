#include <iostream>
#include "sample.hpp"

//definition du constructeur de la classe Sample
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

//definition du destructeur de la classe Sample
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}