#include "ScalarConverter.hpp"
#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>

int	main(int argc, const char **argv)
{
	if (argc == 2) {
		ScalarConverter	convert(argv[1]);
		convert.printAll();
	}
	else
		std::cerr << "Error: Bad number of arguments" << std::endl;

	return (0);
}