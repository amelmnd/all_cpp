#include <iostream>
#include "sample2.hpp"

Sample2::Sample2(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample2::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}