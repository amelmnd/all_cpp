#pragma once
#define HOW_MANY_ANIMALS 4

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & src);
		virtual std::string getType() const;
		Brain *getBrain(void) const;
		virtual void makeSound(void) = 0;
};
