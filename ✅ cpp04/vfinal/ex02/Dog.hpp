#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *_dogBrain;

	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);

		Dog &operator=(Dog const &src);
		virtual void makeSound(void);
		void setBrain(std::string idea, int index);
		std::string getBrain(int index);
};
