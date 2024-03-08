#include <iostream>
#include "sample.hpp"

void f0(void)
{
	Sample instance;

	std::cout << Sample::getNbInst() << std::endl;

	return;
}

void f1(void)
{
	Sample instance;

	std::cout << Sample::getNbInst() << std::endl;
	f0();

	return;
}

int main(void)
{
	std::cout << Sample::getNbInst() << std::endl;
	f1();
	std::cout << Sample::getNbInst() << std::endl;

	return 0;
}