#pragma once

#include <iostream>
#include <string>

#define HOW_MANY_ANIMALS 6

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal & operator=(Animal const & src);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};