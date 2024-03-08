#pragma once
#include <iostream>
#include <string>

class WrongAAnimal
{
	protected:
		std::string _type;

	public:
		WrongAAnimal(void);
		WrongAAnimal(WrongAAnimal const &src);
		~WrongAAnimal();

		WrongAAnimal & operator=(WrongAAnimal const & src);
		std::string getType() const;
		void makeSound(void) const;
};
