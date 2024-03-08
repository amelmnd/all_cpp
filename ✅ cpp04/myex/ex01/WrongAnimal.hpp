#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & src);
		std::string getType() const;
		void makeSound(void) const;
};
