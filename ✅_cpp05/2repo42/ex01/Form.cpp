#include "Form.hpp"
#include "Bureaucrat.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
Form::Form(const std::string name, const unsigned int gradeSignIt, const unsigned int gradeExecIt) : _cName(name), _cGradeSignIt(gradeSignIt), _cGradeExecIt(gradeExecIt)
{
	std::cout << this->_cName <<  " Form constructor call" << std::endl;
	this->_isSigned = false;
}

Form::Form(Form const &src) :  _cName(src._cName), _cGradeSignIt(src._cGradeSignIt), _cGradeExecIt(src._cGradeExecIt)
{
	*this = src;
}

Form::~Form(void)
{
	std::cout << this->_cName << " Form Destructor call" << std::endl;
}

/* OPERATOR */
Form & Form::operator=(Form const & src)
{
	this->_isSigned = src._isSigned;
	return (*this);
}

/* FUNCTION*/

bool Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::string Form::getNameForm(void) const
{
	return (this->_cName);
}

unsigned int Form::getGradeSignIt(void) const
{
	return (this->_cGradeSignIt);
}

unsigned int Form::getGradeExecIt(void) const
{
	return (this->_cGradeExecIt);
}

void Form::beSigned(Bureaucrat & theBureaucrat)
{
	try
	{
		if (theBureaucrat.getGrade() > this->_cGradeSignIt)
			throw Form::GradeTooLowException();
		else if (this->_isSigned == true)
		{
			std::cout << this->_cName <<" is already signed" << std::endl;
		}
		else
		{
			this->_isSigned = true;
			std::cout << theBureaucrat.getName() << " signed " << this->getNameForm() << std::endl;
		}
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cerr << this->_cName << e.what() << " for signed"<< std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << src.getNameForm();
	o << ", Form need grade ";
	o << src.getGradeSignIt();
	o << " for sign it and grade ";
	o << src.getGradeExecIt();
	o << " for execute it.";
	return o;
}
