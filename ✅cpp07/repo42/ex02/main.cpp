#include <iostream>
#include "Array.hpp"

int main()
{

	std::cout << "------- empty Array -------" << std::endl;
	Array<int> empty;
	std::cout << "Array size : " << empty.getSize() << std::endl;
	empty.printArray();

	std::cout << std::endl << "------- NO empty Array -------" << std::endl;
	Array<int> noEmpty(5);
	std::cout << "Array size : " << noEmpty.getSize() << std::endl;
	noEmpty.printArray();

	/* TODO VERIFIER FONCTIONNEMENT DE LA COPY */

	std::cout << std::endl << "------- Copy no empty Array -------" << std::endl;

	Array<int> copy = noEmpty;
	std::cout << "Copy : " << copy.getSize() << std::endl; // Affiche 0
	copy.printArray();


	std::cout << std::endl << "------- Check deep copy -------" << std::endl;
	std::cout << "------- copy -------" << std::endl;
	copy.printArray();
	copy.setArray(2, 15);
	copy.printArray();
	std::cout << "------- origin -------" << std::endl;
	noEmpty.printArray();

	std::cout << std::endl;
	try
	{
		std::cout << "Value element : " << noEmpty[2] << std::endl; // Affiche 0
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Value element : " << empty[2] << std::endl; // Affiche 0
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	return (0);
}