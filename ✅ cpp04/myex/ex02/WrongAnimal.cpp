#include "WrongAnimal.hpp"

WrongAAnimal::WrongAAnimal(void): _type("WrongAAnimal")
{
	std::cout << "WrongAAnimal construtor call" << std::endl;
}

WrongAAnimal::WrongAAnimal(WrongAAnimal const & src)
{
	std::cout << "WrongAAnimal constructor by copy call" << std::endl;
	*this = src;
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal destructor call" << std::endl;
}

WrongAAnimal& WrongAAnimal::operator=(WrongAAnimal const & src)
{
	this->_type = src._type;
	std::cout << "WrongAAnimal affection operator call" << std::endl;
	return (*this);
}

std::string WrongAAnimal::getType() const
{
	return (this->_type);
}

void WrongAAnimal::makeSound(void) const
{
	std::cout << "A generic WrongAAnimal doesn't have sound !" << std::endl;
}