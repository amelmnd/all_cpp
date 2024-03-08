#include "Zombie.hpp"

int main()
{
	int hordeSize;
	std::string zombieName;

	std::cout << "How many zombie ?" << std::endl;
	std::cin >> hordeSize;

	std::cout << "What is name for all zombie ?" << std::endl;
	std::cin >> zombieName;

	Zombie* zombies = zombieHorde(hordeSize, zombieName);

	for (int i = 0; i < hordeSize; i++)
	{
		std::cout <<  "zombie " << i << std::endl;
		zombies->announce();
	}
	delete[] zombies;
	return (0);
}