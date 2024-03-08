#include "Weapon.hpp"

Weapon::Weapon(std::string typeValue):type(typeValue)
{
	this->type = typeValue;
	std::cout << this->type << " construct" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << this->type << " destroy" << std::endl;
}
const std::string & Weapon::getType()
{
	return (this->type);
}
void Weapon::setType(std::string typeValue)
{
	this->type = typeValue;
}