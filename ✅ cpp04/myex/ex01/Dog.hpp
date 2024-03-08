#pragma once
#include "Brain.hpp"
#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain *_dogBrain;

	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);

		Dog &operator=(Dog const &src);
		virtual void makeSound(void) const;
		virtual std::string getType() const;
		Brain *getBrain(void) const;

};
