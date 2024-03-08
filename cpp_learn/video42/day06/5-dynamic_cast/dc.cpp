#include <iostream>
#include <typeinfo>
#include <exception>

class Parent
{ public: virtual ~Parent ( void ) 0 };
class Child1: public Parent {};
class Child2: public Parent {};

int
main( void ) {
	Child1 a;
	Parent *b;

	b = &a; // Explicit downcast->Suspens..Child *
	Child1 * c = dynamic_cast<Child1 *>(b); // dynamic cast par pointeur
	if ( c == NULL ) {
		std::cout << "Conversion is NOT Ok" << std::endl;
	}
	else {
		std::cout << "Conversion is Ok" << std::endl;
	}
	try {
		Child2 &d = dynamic_cast<Child2 *>(b); //dynamic cast par reference
		//-> Suspens.

		std::cout << "Conversion is Ok" << std::endl;
	}
	catch ( std::bad_cast &bc ) {
		std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl;
		return 0;
	}
	return 0;
}