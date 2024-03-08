#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog constructor call" << std::endl;
}

Dog::Dog(Dog const & src): Animal()
{
	std::cout << "Animal constructor by copy call" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor call" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
		this->_type = src.getType();

	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Waouf" << std::endl;
}