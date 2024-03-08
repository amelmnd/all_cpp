#pragma once
#define HOW_MANY_ANIMALS 6

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal & operator=(Animal const & src);
		virtual std::string getType() const;
		Brain *getBrain(void) const;
		virtual void makeSound(void) const;
};
