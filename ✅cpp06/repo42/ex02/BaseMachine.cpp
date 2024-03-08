
#include "BaseMachine.hpp"


Base*	BaseMachine::generate( void ) {

	std::srand(std::time(0));
	int	rand = std::rand() % 3;

	if (rand == 1)
		return (new A());
	else if (rand == 2)
		return (new B());
	else if (rand == 0)
		return (new C());
	return (0);
}

void	BaseMachine::identify( Base* p ) {

	A	*ptrA = dynamic_cast<A *>(p);

	if (ptrA) {
		std::cout << "Pointer is of type A" << std::endl;
		return;
	}
	B	*ptrB = dynamic_cast<B *>(p);

	if (ptrB) {
		std::cout << "Pointer is of type B" << std::endl;
		return;
	}
	C	*ptrC = dynamic_cast<C *>(p);

	if (ptrC)
		std::cout << "Pointer is of type C" << std::endl;
	else
		std::cerr << "Error: Unknown pointer type" << std::endl;
}

void	BaseMachine::identify( Base& p ) {

	try {
		A	&ptrA = dynamic_cast<A &>(p);
		(void)ptrA;
		std::cout << "Reference is of type A" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B	&ptrB = dynamic_cast<B &>(p);
			(void)ptrB;
			std::cout << "Reference is of type B" << std::endl;
		}
		catch (std::exception &e) {
			try {
				C	&ptrC = dynamic_cast<C &>(p);
				(void)ptrC;
				std::cout << "Reference is of type C" << std::endl;
			}
			catch (std::exception &e) {
				std::cerr << "Error: Unknown reference type" << std::endl;
			}
		}
	}
}
