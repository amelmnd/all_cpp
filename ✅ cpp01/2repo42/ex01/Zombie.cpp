#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "🧟" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "is Destroyed" << std::endl;
}

void Zombie::setName(std ::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}