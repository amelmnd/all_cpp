#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

	public:
		Zombie (std::string name);
		~Zombie();
		// void Zombie::announce(); => ERREUR ./Zombie.hpp:14:16: error: extra qualification on member 'announce'
		void announce();
		void getName(void);

	private:
		std::string _name;
};

// no member function
Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif