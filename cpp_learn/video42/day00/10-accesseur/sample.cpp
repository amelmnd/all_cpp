#include <iostream>
#include "sample.hpp"

//ici on est a l'interieur de la class

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	//l'attribut membre priver peut etre appeler car on est dans la classe ou il est declarer
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

//definition du destructeur de la classe Sample
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::publicBar(void) const {
	std::cout << "Member function publicBar called" << std::endl;
	return;
}

//la fonction membre priver peut etre appeler car on est dans la classe ou il est declarer
void Sample::_privateBar(void) const {
	std::cout << "Member function _privateBar called" << std::endl;
	return;
}