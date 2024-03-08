#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _cName;
		const unsigned int _cGradeSignIt;
		const unsigned int _cGradeExecIt;
		bool _isSigned;

	public:
		AForm(const std::string _cName, const unsigned int _cGradeSignIt, const unsigned int _cGradeExecIt);
		AForm(AForm const &src);
		virtual ~AForm(void);

		AForm &operator=(AForm const &src);

		bool getIsSigned(void) const;
		std::string getNameForm(void) const;
		unsigned int getGradeSignIt(void) const;
		unsigned int getExecIt(void) const;

		void beSigned(Bureaucrat &theBureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (" Grade Too High");
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (" Grade Too Low");
				}
		};

		class HasNotSigned: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (" has not signed;");
				}
		};
};

std::ostream &operator<<(std::ostream &o, AForm const &src);