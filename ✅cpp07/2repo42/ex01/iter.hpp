#pragma once

#include <iostream>

template <typename T>

void iter (T *array, unsigned int size, void (*f)(T &))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template < typename T >

void printTab (T & x)
{
	std::cout << x << " | ";
}