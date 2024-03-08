#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie(void);
		~Zombie();

		void setName(std ::string name);
		void announce(void);

	private:
		std::string _name;
};

Zombie * zombieHorde( int N, std::string name );

#endif