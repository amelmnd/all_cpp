#include <iostream>
#include "sample.hpp"

Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar(void) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	// this->qd = 0;
	// error: assignment of member ‘Sample::qd’ in read-only object = car la fonction est const
	return;
}