#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal* animalArray[HOW_MANY_ANIMALS];

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

	std::cout << std::endl << "<=====  DEEP COPY =====>" << std::endl;
	std::cout << "<*** CAT DEEP COPY **>" << std::endl;
	std::cout << "_ CAT A _>" << std::endl;
	Cat* catA = new Cat();
	catA->setBrain("Salut moi c'est Grominet", 0);
	std::cout << "catA ideas[0] = " << catA->getBrain(0) << std::endl;
	std::cout << "catA adress = " << &catA << std::endl;
	std::cout << "check catA song = ";
	catA->makeSound();

	std::cout << std::endl << "_ CAT B _>" << std::endl;
	Cat* catB = new Cat(*catA);;
	catB->setBrain("Salut moi c'est Tom", 0);
	std::cout << "catB ideas[0] = " << catB->getBrain(0) << std::endl;
	std::cout << "catB adress = " << &catB << std::endl;
	std::cout << "check catB song = ";
	catB->makeSound();

	std::cout << std::endl << "check catA ideas[0] = " << catA->getBrain(0) << std::endl;
	std::cout << "check catA adress = " << &catA << std::endl;


	std::cout << std::endl << "<*** DOG DEEP COPY**>" << std::endl;
	std::cout << "_ DOG A _>" << std::endl;
	Dog* dogA = new Dog();
	dogA->setBrain("Salut moi c'est Snoopy", 0);
	std::cout << "dogA ideas[0] = " << dogA->getBrain(0) << std::endl;
	std::cout << "dogA adress = " << &dogA << std::endl;
	std::cout << "check dogA song = ";
	dogA->makeSound();

	std::cout << std::endl << "_ DOG B _>" << std::endl;
	Dog* dogB = new Dog(*dogA);;
	dogB->setBrain("Salut moi c'est Scooby-Doo", 0);
	std::cout << "dogB ideas[0] = " << dogB->getBrain(0) << std::endl;
	std::cout << "dogB adress = " << &dogB << std::endl;
	std::cout << "check dogA song = ";
	dogB->makeSound();

	std::cout << "check dogA ideas[0] = " << dogA->getBrain(0) << std::endl;
	std::cout << "check dogA adress = " << &dogA << std::endl;


	return (0);
}