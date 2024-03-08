#include <iostream>
// using namespace std;

int main(void){
	char buff[512];

	std::cout << "Hello World" << std::endl;

	std::cout << "Input a world: ";
	std::cin >> buff;
	std::cout << "You entered: " << buff << std::endl;
	return 0;
}