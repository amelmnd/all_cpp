#include "Animal.hpp"

AAnimal::AAnimal(void): _type("animal")
{
	std::cout << "Animal construtor call" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Animal constructor by copy call" << std::endl;
	_type = src._type;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor call" << std::endl;
	return;
}

AAnimal& AAnimal::operator=(AAnimal const & src)
{
	std::cout << "Animal affection operator call" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

// void Animal::makeSound(void)
// {
// 	std::cout << "A generic animal doesn't have sound !" << std::endl;
// 	return;
// }