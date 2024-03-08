#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "Cat constructor call" << std::endl;
	return;
}

Cat::Cat(Cat const & src): AAnimal(src)
{
	std::cout << "Cat deep copy constructor called" << std::endl;
	_catBrain = new Brain(*(src._catBrain));

	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor call" << std::endl;
	delete this->_catBrain;
	return;
}

Cat &Cat::operator=(const Cat &src) {
	if (this != &src) {
		AAnimal::operator=(src);
		delete _catBrain;
		_catBrain = new Brain(*(src._catBrain));
	}
	return *this;
}

void Cat::makeSound()
{
	std::cout << "Miaou" << std::endl;
	return;
}

void Cat::setBrain(std::string idea, int index)
{
	this->_catBrain->setIdea(idea, index);
	return;
}
std::string Cat::getBrain(int index)
{
	return (this->_catBrain->getIdea(index));
}