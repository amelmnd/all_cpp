#include <iostream>
#include "sample1.hpp"

//Initialisation list avec le pointeur this
// Possible mais pas recommandé
Sample1::Sample1(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample1::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
