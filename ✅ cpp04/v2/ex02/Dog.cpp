#include "Dog.hpp"

Dog::Dog(void): AAnimal()
{
	this->_type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << "Dog constructor call" << std::endl;
	return;
}

Dog::Dog(Dog const & src): AAnimal(src)
{
	std::cout << "AAnimal constructor by depp copy call" << std::endl;
	_dogBrain = new Brain(*(src._dogBrain));
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor call" << std::endl;
	delete this->_dogBrain;
	return;
}

Dog &Dog::operator=(Dog const &src)
{
	if (&src != this)
	{
		AAnimal::operator=(src);
		delete _dogBrain;
		_dogBrain = new Brain(*(src._dogBrain));
	}
	return (*this);
}

void Dog::makeSound(void)
{
	std::cout << "Waouf" << std::endl;
	return;
}

void Dog::setBrain(std::string idea, int index)
{
	this->_dogBrain->setIdea(idea, index);
}

std::string Dog::getBrain(int index)
{
	return (this->_dogBrain->getIdea(index));
}