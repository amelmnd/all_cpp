#include "FragTrap.hpp"

FragTrap::FragTrap(std::string	name): ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap Constructor create " << this->_name << std::endl;
	std::cout << "name = "  << this->_name << std::endl;
	std::cout << "start hitPoint = "  << this->_hitPoint << std::endl;
	std::cout << "start energyPoints = " << this->_energyPoints << std::endl;
	std::cout << "start attackDamage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(this->_name)
{
	std::cout << "FragTrap Constructor by Copy create " << this->_name << std::endl;
	*this = src;
	return;
}
FragTrap::~FragTrap(void)
{
	std::cout << std::endl;
	std::cout << "FragTrap Destruct " << this->_name << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoint = src._hitPoint;
	std::cout << "Assignation operator called from " << this->_name << std::endl;
	std::cout << "name = "  << this->_name << std::endl;
	std::cout << "start hitPoint = "  << this->_hitPoint << std::endl;
	std::cout << "start energyPoints = " << this->_energyPoints << std::endl;
	std::cout << "start attackDamage = " << this->_attackDamage << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives "<< std::endl;
	return;
}

