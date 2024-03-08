#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat constructor call" << std::endl;
	return;
}

Cat::Cat(Cat const & src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor call" << std::endl;
	return;
}

Cat &Cat::operator=(Cat const &src)
{
	this->_type = src.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return;
}