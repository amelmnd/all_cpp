#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal & operator=(Animal const & src);
		std::string getType() const;
		virtual void makeSound(void) const;
};
