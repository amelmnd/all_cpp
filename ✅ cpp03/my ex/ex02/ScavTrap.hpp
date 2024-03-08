#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(std::string name);
		ScavTrap (ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &src);
		void guardGate(void);
};

#endif