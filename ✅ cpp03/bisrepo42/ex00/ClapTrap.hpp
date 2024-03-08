#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int _hitPoint;
		int _energyPoints;
		int _attackDamage;

	public:
		ClapTrap(std::string	_name);
		ClapTrap (ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap &operator=(ClapTrap const &src);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isAlife(void);
};

#endif