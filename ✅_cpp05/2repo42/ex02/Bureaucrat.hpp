#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const & src);

		unsigned int getGrade() const;
		std::string getName(void) const;

		void setAddGrade();
		void setDeleteGrade();

		void signForm(AForm & theForm);
		void executeForm(AForm const & theForm);

		class GradeTooHighException: public std::exception
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
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs);
