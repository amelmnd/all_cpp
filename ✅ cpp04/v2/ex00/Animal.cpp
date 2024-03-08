#include "Animal.hpp"

Animal::Animal(void): _type("animal")
{
	std::cout << "Animal construtor call" << std::endl;
	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal constructor by copy call" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor call" << std::endl;
	return;
}

Animal& Animal::operator=(Animal const & src)
{
	this->_type = src._type;
	std::cout << "Animal affection operator call" << std::endl;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "A generic animal doesn't have sound !" << std::endl;
	return;
}