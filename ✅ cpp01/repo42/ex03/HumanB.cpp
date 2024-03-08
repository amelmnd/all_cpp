#include "HumanB.hpp"

HumanB::HumanB(std::string humanName)
{
	this->name = humanName;
	this->_weaponType = NULL;
	std::cout << this->name << " create" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weaponType = &weapon;
}

void HumanB:: attack()
{
	std::string weapon = this->_weaponType ? this->_weaponType->getType() : "";

	if (weapon.length() > 0)
		std::cout << this->name << " attacks with their " << " attacks with their " << weapon << std::endl;
	else
		std::cout << this->name << " hasn't weapon" << std::endl;

}