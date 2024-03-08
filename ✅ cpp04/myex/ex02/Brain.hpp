#pragma once

#include <iostream>

class Brain
{
	protected:

	public:
		std::string	ideas[100];
		Brain(void);
		Brain(const Brain &src);
		~Brain(void);

		Brain	&operator=(const Brain &src);

};

