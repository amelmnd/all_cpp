#include "Integer.hpp"

int main() {

	Integer instance1(30);
	Integer instance2(10);
	Integer instance3(0);


	std::cout << "Value of instance1 : " << instance1 << std::endl;
	std::cout << "Value of instance2: " << instance2 << std::endl;
	instance2 = Integer (12);
	std::cout << "Value of instance2: " << instance2 << std::endl;
	std::cout << "value of instance3: " << instance3 << std::endl;
	instance3 = instance1 + instance2;
	std::cout << "Value of instance3: " << instance3 << std::endl;
	return (0);
}