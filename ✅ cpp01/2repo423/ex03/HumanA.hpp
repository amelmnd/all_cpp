#ifndef HUMANA_HPP
# define  HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon& _weaponType;

	public:
		HumanA(std::string humanName, Weapon& weapon);
		~HumanA();
		void attack();
};

#endif