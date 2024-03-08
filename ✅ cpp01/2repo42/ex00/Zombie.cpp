#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	this->_name = name;
}

Zombie::~Zombie (void)
{
	std::cout  << this->_name << " is destroyed." << std::endl;
}

void Zombie::getName(void)
{
	std::cout << this->_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

