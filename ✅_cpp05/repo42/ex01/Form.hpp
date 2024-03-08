#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _cName;
		const unsigned int _cGradeSignIt;
		const unsigned int _cGradeExecIt;
		bool _isSigned;

	public:
		Form(const std::string _cName, const unsigned int _cGradeSignIt, const unsigned int _cGradeExecIt);
		Form(Form const &src);
		~Form(void);

		Form &operator=(Form const &src);

		bool getIsSigned(void) const;
		std::string getNameForm(void) const;
		unsigned int getGradeSignIt(void) const;
		unsigned int getGradeExecIt(void) const;

		void beSigned(Bureaucrat &theBureaucrat);

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (" Grade Too Low");
				}
		};
};

std::ostream &operator<<(std::ostream &o, Form const &src);