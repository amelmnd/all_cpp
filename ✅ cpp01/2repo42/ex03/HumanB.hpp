#ifndef HUMANB_HPP
# define  HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *_weaponType;

	public:
		HumanB(std::string humanName);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack();
};

#endif