#pragma once

#include <iostream>
#include <stack>

template <typename T>

class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void){};
		MutantStack(const MutantStack &src){};
		~MutantStack(void){};

		MutantStack &operator=(const MutantStack &src)
		{
			if (this != &src)
				std::stack<T>::operator=(src);
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		iterator end()
		{
			return std::stack<T>::c.end();
		}

};
