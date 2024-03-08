#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain construtor call" << std::endl;
	return;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain constructor by copy call" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor call" << std::endl;
	return;
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

void Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
	return;
}
std::string Brain::getIdea(int index)
{
	if (this->ideas[index].empty())
		return "";
	else
		return (this->ideas[index]);
}
