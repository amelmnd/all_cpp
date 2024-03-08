#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	const Animal *copyCat = cat;
	std::cout << copyCat->getType() << " " << std::endl;
	copyCat->makeSound();
	delete meta;
	delete cat;
	delete dog;

	//segfault because cat is delete
	// std::cout << copyCat->getType() << " " << std::endl;
	// copyCat->makeSound();
	// delete copyCat;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete wrongCat;
	delete wrongMeta;
	return (0);
}