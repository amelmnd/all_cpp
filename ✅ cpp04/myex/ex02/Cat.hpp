#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_catBrain;

	public:
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);

		Cat &operator=(Cat const &src);
		virtual std::string getType() const;
		virtual void makeSound(void);
		Brain *getBrain(void) const;
};
