#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat constructor call" << std::endl;
}

Cat::Cat(Cat const & src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor call" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	this->_type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}