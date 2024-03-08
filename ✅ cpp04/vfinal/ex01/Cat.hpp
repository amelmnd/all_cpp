#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_catBrain;

	public:
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);

		Cat &operator=(Cat const &src);
		virtual void makeSound(void) const;
		void setBrain(std::string idea, int index);
		std::string getBrain(int index);
};
