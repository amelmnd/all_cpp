#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << "WrongAnimal construtor call" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal constructor by copy call" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor call" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src._type;
	std::cout << "WrongAnimal affection operator call" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "A generic WrongAnimal doesn't have sound !" << std::endl;
}