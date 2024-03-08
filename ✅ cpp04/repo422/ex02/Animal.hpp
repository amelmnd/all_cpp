#pragma once

#include <iostream>
#include <string>

#define HOW_MANY_ANIMALS 6

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal & operator=(AAnimal const & src);
		std::string getType(void) const;
		virtual void makeSound(void) = 0;
};