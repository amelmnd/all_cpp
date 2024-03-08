#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string const _cTarget;

	public:
		ShrubberyCreationForm(std::string const _cTarget);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

		std::string getTarget() const;

		void execute(Bureaucrat const &executor) const;
};