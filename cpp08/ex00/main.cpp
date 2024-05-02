#include "easyfind.hpp"
// #include <alg>
// #include <resulterator>
// #include <vector>
// #include <iostream>

int main ()
{
	std::vector<int>  vec;
	vec.push_back( 12 );
	vec.push_back( 123 );
	vec.push_back( 1234 );
	vec.push_back( 12345 );


	int search = 1234;

	try
	{
		std::vector<int>::iterator result = easyfind(vec , search);
		if (result != vec.end()) {
			std::cout << search << " find to index " << std::distance(vec.begin(), result) << std::endl;
		}
	}
	catch (std::invalid_argument const& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	search = 42;

	try
	{
		std::vector<int>::iterator result = easyfind(vec , search);
		if (result != vec.end()) {
			std::cout << search << " find to index " << std::distance(vec.begin(), result) << std::endl;
		}
	}
	catch (std::invalid_argument const& e)
	{
		std::cout << "Error: " << search << e.what() << std::endl;
	}
}