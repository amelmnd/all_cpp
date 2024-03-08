#include "Animal.hpp"

AAnimal::AAnimal(void): _type("AAnimal")
{
	std::cout << "AAnimal construtor call" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal constructor by copy call" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor call" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const & src)
{
	this->_type = src._type;
	std::cout << "AAnimal affection operator call" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

// void AAnimal::makeSound(void) const
// {
// 	std::cout << "A generic AAnimal doesn't have sound !" << std::endl;
// }

Brain	*Dog::getBrain(void) const {
	return (NULL);
}