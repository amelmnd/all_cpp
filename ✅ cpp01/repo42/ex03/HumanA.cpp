
#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& weapon):name(humanName), _weaponType(weapon)
{
	this->name = humanName;
	_weaponType.setType(_weaponType.getType());

	std::cout << this->name << " create" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void HumanA:: attack()
{
	std::cout << this->name << " attacks with their "
		<< " attacks with their " << this->_weaponType.getType() << std::endl;

}