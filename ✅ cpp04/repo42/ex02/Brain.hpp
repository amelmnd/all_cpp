#pragma once

#include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain &src);
		~Brain(void);

		Brain	&operator=(const Brain &src);

		void setIdea(std::string idea, int index);
		std::string getIdea(int index);
};
