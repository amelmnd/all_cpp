#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	name): _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor create " << this->_name << std::endl;
	std::cout << "name = "  << this->_name << std::endl;
	std::cout << "start hitPoint = "  << this->_hitPoint << std::endl;
	std::cout << "start energyPoints = " << this->_energyPoints << std::endl;
	std::cout << "start attackDamage = " << this->_attackDamage << std::endl;
	std::cout << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Constructor by Copy create " << this->_name << std::endl;
	*this = src;
	return;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << std::endl;
	std::cout << "ClapTrap Destruct " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
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

bool ClapTrap::isAlife(void)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << "don't have energy points !" << std::endl;
		return false;
	}
	if (this->_hitPoint <= 0)
	{
		std::cout << this->_name << " is death !" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string &target)
{
	if (isAlife() != true)
		return;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	std::cout << std::endl;
	this->_hitPoint--;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (isAlife() != true)
		return;

	this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount <<  " points of damage !" << std::endl;
	if (this->_hitPoint <= 0 || this->_energyPoints <= 0)
	{
		std::cout << this->_name << " is death !" << std::endl;
		return;
	}
		std::cout<< "Now he has " << this->_hitPoint << " points of life!" << std::endl;
	std::cout << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlife() != true)
		return;
	this->_hitPoint += amount;
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points !" << std::endl;
	std::cout<< "Now he has " << this->_hitPoint << " points of life!" << std::endl;
	std::cout << std::endl;
	this->_hitPoint--;
	return;
}