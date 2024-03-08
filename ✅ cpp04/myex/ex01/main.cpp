#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animalArray[HOW_MANY_ANIMALS];

	std::cout << "<===== CREATE ARRAY =====>" << std::endl;
	for (size_t i = 0; i < HOW_MANY_ANIMALS; i++)
	{

		if (i%2)
			animalArray[i] = new Cat();
		else
			animalArray[i] = new Dog();
		std::cout << "[i]= " << i << std::endl << std::endl;
	}

	std::cout << std::endl << "<===== CHECK ARRAY =====>" << std::endl;
	for (size_t i = 0; i < HOW_MANY_ANIMALS; i++)
	{
		animalArray[i]->makeSound();
	}

	std::cout << std::endl << "<===== DELETE ARRAY =====>" << std::endl;
	for (size_t i = 0; i < HOW_MANY_ANIMALS; i++)
	{
		delete animalArray[i];
	}

	std::cout << std::endl << "<===== TEST DEEP COPY =====>" << std::endl;

	Cat* catA = new Cat();
	catA->getBrain()->ideas[0] = "Salut moi c'est titi";
	std::cout << "catA ideas[0] = " << catA->getBrain()->ideas[0] << std::endl;
	std::cout << "catA adress = " << &catA << std::endl;

	Cat* catB = catA;
	std::cout << "catB ideas[0] = " << catB->getBrain()->ideas[0] << std::endl;
	std::cout << "catB adress = " << &catB << std::endl;

	catB->getBrain()->ideas[0] = "Salut moi c'est grominet";
	std::cout << "catB ideas[0] = " << catB->getBrain()->ideas[0] << std::endl;
	std::cout << "catB adress = " << &catB << std::endl;
	std::cout << "check catA ideas[0] = " << catA->getBrain()->ideas[0] << std::endl;
	std::cout << "check catA adress = " << &catA << std::endl;

	return (0);
}