#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor call" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor call" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	this->_type = src.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	return;
}