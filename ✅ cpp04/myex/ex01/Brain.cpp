#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain construtor call" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain constructor by copy call" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor call" << std::endl;
}

Brain& Brain::operator=(Brain const & src)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain affection operator call" << std::endl;
	return (*this);
}
