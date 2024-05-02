#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _n;
		std::vector<int>	_nbs;

	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &src);

		void addNumber(int nb);
		signed int shortestSpan()const;
		signed int longestSpan() const;
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class FullStorage : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Error: The storage is full");
				}
		};
		class NoDistancesFound : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Error: Not enough number stored");
				}
		};

		void printVector();
};
