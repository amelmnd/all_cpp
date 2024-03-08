
#include "ScavTrap.hpp"

int main()
{
	ClapTrap tunes("tunes");
	ScavTrap ralph("Ralph");
	ScavTrap felix = ralph;

	std::cout << "|***** ClapTrap *****|" << std::endl;

	tunes.attack("Grosminet");
	tunes.takeDamage(10);
	tunes.beRepaired(8);

	std::cout <<  std::endl;

	std::cout << "|***** ScavTrap *****|" << std::endl;
	std::cout << "________is ralph________" << std::endl;
	ralph.attack("Vanellope");
	ralph.takeDamage(42);
	ralph.beRepaired(2);
	ralph.guardGate();

	std::cout <<  std::endl;

	std::cout << "________is felix________" << std::endl;
	felix.attack("King Candy ");
	felix.takeDamage(75);
	felix.beRepaired(10);


	return (0);
}