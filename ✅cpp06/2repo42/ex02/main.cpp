#include "BaseMachine.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void) {

	BaseMachine	machine;

	std::cout << "___POINTER___" << std::endl;
	Base	*genPtr = machine.generate();
	machine.identify(genPtr);

	std::cout << "___REF___" << std::endl;
	machine.identify(genPtr);

	delete genPtr;

	return (0);
}
