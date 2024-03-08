#include "Dog.hpp"

Dog::Dog(void): AAnimal()
{
	std::cout << "Dog constructor call" << std::endl;
	this->_type = "Dog";
	std::cout << "Dog Brain construct" << std::endl;
	this->_dogBrain = new Brain();
}

Dog::Dog(Dog const & src): AAnimal()
{
	std::cout << "AAnimal constructor by copy call" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog Brain Destroy" << std::endl;
	delete this->_dogBrain;
	std::cout << "Dog destructor call" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
		this->_type = src.getType();

	return (*this);
}

void Dog::makeSound(void)
{
	std::cout << "Waouf" << std::endl;
}

std::string Dog::getType() const
{
	return (this->getType());
}

Brain	*Dog::getBrain(void) const {
	return (this->_dogBrain);
}