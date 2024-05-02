#include "Span.hpp"

#define N 10000
#define START -1000
#define TOTAL 9000 - 2

int main() {

	std::cout << "-------- Subject -------" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------------------" << std::endl;
	std::cout << "-------- My test shortestSpan & longestSpan -------" << std::endl;

	Span sp2 = Span(N);

	sp2.addNumber(1);
	try
	{
		int shortest = sp2.shortestSpan();
		std::cout << "The shortest distance is : " << shortest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}

	sp2.addNumber(-5);
	try
	{
		int shortest = sp2.shortestSpan();
		std::cout << "The shortest distance is : " << shortest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}

	try
	{
		int longest = sp2.longestSpan();
		std::cout << "The longest distance is : " << longest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}

	for (signed int i = START; i < TOTAL; i++)
	{
		sp2.addNumber(i + 5);
	}

	try
	{
		int shortest = sp2.shortestSpan();
		std::cout << "The shortest distance is : " << shortest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}
	try
	{
		int longest = sp2.longestSpan();
		std::cout << "The longest distance is : " << longest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}
	sp2.addNumber(-5);

	std::cout << "------------------------" << std::endl;
	std::cout << "-------- My test plage add  -------" << std::endl;
	Span sp3 = Span(N);
	std::vector<int> numbersToAdd;
	for (int i = START; i < TOTAL; ++i) {
		numbersToAdd.push_back(i + 5);
	}
	sp3.addNumbers(numbersToAdd.begin(), numbersToAdd.end());

	try {
		int shortest = sp3.shortestSpan();
		std::cout << "The shortest distance is : " << shortest << std::endl;
	} catch(Span::NoDistancesFound& e) {
		std::cerr << e.what() << std::endl;
	}
    try {
        int longest = sp3.longestSpan();
        std::cout << "The longest distance is : " << longest << std::endl;
    } catch(Span::NoDistancesFound& e) {
        std::cerr << e.what() << std::endl;
    }

}
