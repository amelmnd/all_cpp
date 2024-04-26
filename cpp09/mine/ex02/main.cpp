#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	PmergeMe PmergeMe(ac, av);
	return (0);
}