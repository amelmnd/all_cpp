#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog constructor call" << std::endl;
	return;
}

Dog::Dog(Dog const & src): Animal()
{
	std::cout << "Animal constructor by copy call" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor call" << std::endl;
	return;
}

Dog &Dog::operator=(Dog const &src)
{
	this->_type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Waouf" << std::endl;
	return;
}