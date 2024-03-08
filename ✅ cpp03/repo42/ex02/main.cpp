
#include "FragTrap.hpp"

int main()
{
	ClapTrap daffy("Daffy");
	ScavTrap ralph("Ralph");
	FragTrap cat("Grominet");
	FragTrap granny = cat;

	std::cout << "|***** ClapTrap *****|" << std::endl;

	daffy.attack("Bugs Bunny");
	daffy.takeDamage(10);
	daffy.beRepaired(8);

	std::cout <<  std::endl;

	std::cout << "|***** ScavTrap *****|" << std::endl;
	std::cout << "________is ralph________" << std::endl;

	ralph.attack("Vanellope");
	ralph.takeDamage(42);
	ralph.beRepaired(2);
	ralph.guardGate();


	std::cout <<  std::endl;

	std::cout << "|***** FragTrap *****|" << std::endl;
	std::cout << "________is cat________" << std::endl;

	cat.attack("Titi");
	cat.takeDamage(42);
	cat.beRepaired(2);
	cat.highFivesGuys();
	std::cout <<  std::endl;

	std::cout << "________is granny________" << std::endl;
	granny.attack("Jerry");
	cat.highFivesGuys();
	granny.takeDamage(75);
	granny.beRepaired(10);


	return (0);
}