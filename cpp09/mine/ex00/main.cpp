#include "BitcoinExchange.hpp"

int main(int ac, char**av)
{
	BitcoinExchange btc = BitcoinExchange();
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	else
	{
		return btc.BitcoinChange(av[1]);
	}
}