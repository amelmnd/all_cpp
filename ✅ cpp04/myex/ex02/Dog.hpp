#pragma once
#include "Brain.hpp"
#include "Animal.hpp"

class Dog: public AAnimal
{
	private:
		Brain *_dogBrain;

	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);

		Dog &operator=(Dog const &src);
		virtual std::string getType() const;
		virtual void makeSound(void);
		Brain *getBrain(void) const;

};
