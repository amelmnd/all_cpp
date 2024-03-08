#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string const _cTarget;

	public:
		RobotomyRequestForm(std::string const _cTarget);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

		std::string getTarget() const;

		void execute(Bureaucrat const &executor) const;
};