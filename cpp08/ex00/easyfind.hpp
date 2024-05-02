#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

template <typename T>

typename T::iterator easyfind(T& container, int value)
{
	std::vector<int>::iterator result = std::find(container.begin(), container.end(), value);

	if (result != container.end()) {
		return (result);
	}
	else
	{
		throw std::invalid_argument(" not found");
		return (container.end());
	}
}
