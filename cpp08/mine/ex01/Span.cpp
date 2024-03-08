#include "Span.hpp"

Span::Span(unsigned int n):_n(n)
{
	std::cout << "Span constructor call" << std::endl;
	return;
}

Span::~Span()
{
	std::cout << "Span destructor call" << std::endl;
	return;
}

void	Span::addNumber(signed int nb)
{
	try
	{
		if (_nbs.size() >= _n)
			throw Span::FullStorage();
		_nbs.push_back(nb);
	}
	catch(Span::FullStorage & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return;
}

signed int Span::shortestSpan() const
{

	if (_nbs.size() <= 1)
	{
		throw Span::NoDistancesFound();
	}
	else
	{
		std::vector<int> cpy = _nbs;
		std::sort(cpy.begin(), cpy.end());
		signed int first = cpy.at(0);
		signed int second = cpy.at(1);
		return (second - first);
	}
}

signed int Span::longestSpan() const
{
	if (_nbs.size() <= 1)
	{
		throw Span::NoDistancesFound();
	}
	else
	{
		int min = *min_element(_nbs.begin(), _nbs.end());
		int max = *max_element(_nbs.begin(), _nbs.end());
		return (max - min);
	}
}


void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try {
		size_t numToAdd = std::distance(begin, end);
		if (_nbs.size() + numToAdd > _n) {
			throw FullStorage();
		}
		_nbs.insert(_nbs.end(), begin, end);
	} catch (const FullStorage& e) {
		std::cerr << e.what() << std::endl;
    }
}


void Span::printVector()
{
	for (unsigned int i = 0; i < _nbs.size(); i++) {
		std::cout << _nbs.at(i) << ' ';
	}
	std::cout << std::endl;
}