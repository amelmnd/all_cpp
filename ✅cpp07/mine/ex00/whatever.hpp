#pragma once

#include <iostream>
#include <string>

template <typename T>

void swap (T & a, T & b)
{
	T c = a;
	a = b;
	b = c;
}

template < typename U >

U const & min (U const & x, U const & y)
{
	return ((x > y || x == y) ? y : x);
}

template < typename V >
V max (V const & x, V const & y)
{
		return ((x < y || x == y) ? y : x);

}