#include "iter.hpp"


int main( void )
{
	std::cout << "intTab: ";
	int intTab[] = { 1, 2, 3, 4, 5 };
	iter<int>(intTab, 5, &printTab);
	std::cout << std::endl;

	std::cout << std::endl << "floatTab: ";
	float floatTab[] = { 0.42f, 1.42f, 2.42f};
	iter<float>(floatTab, 3, &printTab);
	std::cout << std::endl ;

	std::cout << std::endl << "charTab: ";
	char charTab[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	iter<char>(charTab, 7, &printTab);
	std::cout << std::endl ;

	std::cout << std::endl << "strTab: ";
	std::string strTab[] = { "alice", "au", "pays", "des", "merveilles" };
	iter<std::string>(strTab, 5, &printTab);

	return (0);
}