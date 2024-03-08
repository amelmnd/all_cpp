#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor call" << std::endl;
	this->_type = "Cat";

	std::cout << "Cat Brain construct" << std::endl;
	this->_catBrain = new Brain();
}

Cat::Cat(Cat const & src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &src)
	{
	this->_catBrain =
	*this = src;

	}
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Brain Destroy" << std::endl;
	delete this->_catBrain;
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

std::string Cat::getType() const
{
	return (this->getType());
}

Brain	*Cat::getBrain(void) const {
	return (this->_catBrain);
}