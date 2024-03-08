#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string	name): ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap Constructor create " << this->_name << std::endl;
	std::cout << "name = "  << this->_name << std::endl;
	std::cout << "start hitPoint = "  << this->_hitPoint << std::endl;
	std::cout << "start energyPoints = " << this->_energyPoints << std::endl;
	std::cout << "start attackDamage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(this->_name)
{
	std::cout << "ScavTrap Constructor by Copy create " << this->_name << std::endl;
	*this = src;
	return;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << std::endl;
	std::cout << "ScavTrap Destruct " << this->_name << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
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

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap active Gate keeper "<< std::endl;
	return;
}

