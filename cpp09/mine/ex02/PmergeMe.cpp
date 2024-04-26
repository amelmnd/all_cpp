
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av)
{
	// std::cout << "PmergeMe constructor" << std::endl;
	_fillContainers(ac, av);

	std::cout << "Before: ";
	printContainer(_deque);

	_sortWithTime();

	return ;
}

PmergeMe::~PmergeMe(void)
{
	// std::cout << "PmergeMe destructor" << std::endl;
	return ;
}

void PmergeMe::_fillContainers(int ac, char **av)
{
	int	value;

	srand(time(NULL));
	for (int i = 1; i < ac; ++i)
	{
		value = atoi(av[i]);
		if (value <= 0)
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
		_deque.push_back(value);
		_list.push_back(value);
	}
	return ;
}

template <typename T>
void PmergeMe::printContainer(const T &container)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return ;
}

template<typename U>
void PmergeMe::mergeInsertSort(U &arr) {
	typename U::value_type temp;

	typename U::iterator it1, it2;
	for (it1 = arr.begin(); it1 != arr.end(); ++it1) {
		temp = *it1;
		it2 = it1;
		while (it2 != arr.begin()) {
			typename U::iterator prevIt = it2;
			std::advance(prevIt, -1);
			if (*prevIt > temp) {
				*it2 = *prevIt;
				it2 = prevIt;
			} else
				break;
		}
		*it2 = temp;
	}
	return;
}

void PmergeMe::_sortWithTime(void)
{
	clock_t	start1;
	clock_t	end1;
	double	time1;
	clock_t	start2;
	clock_t	end2;
	double	time2;

	start1 = clock();
	mergeInsertSort(_deque);
	end1 = clock();
	time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;
	start2 = clock();
	mergeInsertSort(_list);
	end2 = clock();
	time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;
	std::cout << "After: ";
	printContainer(_deque);

	std::cout << "Time to process a range of " << _deque.size() << " elements with " << "std::deque" << " container: " << time1 << " us" << std::endl;
	std::cout << "Time to process a range of " << _deque.size() << " elements with " << "std::list" << " container: " << time2 << " us" << std::endl;

	return ;
}
