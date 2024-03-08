#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern(void);

		Intern &operator=(Intern const &src);

		AForm* makeForm(std::string nameForm, std::string const target);

		void execute(Bureaucrat const &executor) const;
};