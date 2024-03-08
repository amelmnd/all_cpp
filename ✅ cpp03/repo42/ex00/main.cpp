
#include "ClapTrap.hpp"

int main()
{
	ClapTrap tunes("tunes");
	ClapTrap looney(tunes);
	std::cout << "________is Tunes________" << std::endl;
	tunes.attack("Daffy");
	tunes.takeDamage(2);
	tunes.beRepaired(1);

	tunes.attack("Grosminet");
	tunes.takeDamage(10);
	tunes.beRepaired(8);

	tunes.attack("Titi");
	tunes.takeDamage(2);

	std::cout << "________is Lonney________" << std::endl;
	looney.attack("Granny");
	looney.takeDamage(2);
	looney.beRepaired(1);
	return (0);
}