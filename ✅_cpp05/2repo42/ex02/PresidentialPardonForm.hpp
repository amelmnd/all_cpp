#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string const _cTarget;

	public:
		PresidentialPardonForm(std::string const _cTarget);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

		std::string getTarget() const;

		void execute(Bureaucrat const &executor) const;
};