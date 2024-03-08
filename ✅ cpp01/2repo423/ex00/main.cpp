#include <iostream>
#include <string>
#include "Zombie.hpp"

int main ()
{
	std::string zombieName;
	std::cout << " What is Zombie name" << std::endl;
	std::cin >> zombieName;


	std::cout << "---call newZombie()---" << std::endl;
	Zombie *zombie = newZombie(zombieName);

	std::cout << "---call getName()---" << std::endl;
	zombie->getName();

	std::cout << "---call zombie->announce()---" << std::endl;
	zombie->announce();
	delete zombie;

	std::cout << "What is Zombie name" << std::endl;
	std::cin >> zombieName;

	std::cout << "---call randomChump()---" << std::endl;
	randomChump(zombieName);
}