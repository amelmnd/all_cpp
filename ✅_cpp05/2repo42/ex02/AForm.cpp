#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
AForm::AForm(const std::string name, const unsigned int gradeSignIt, const unsigned int gradeExecIt) : _cName(name), _cGradeSignIt(gradeSignIt), _cGradeExecIt(gradeExecIt)
{
	// std::cout << this->_cName <<  " AForm constructor call" << std::endl;
	this->_isSigned = false;
}

AForm::AForm(AForm const &src) :  _cName(src._cName), _cGradeSignIt(src._cGradeSignIt), _cGradeExecIt(src._cGradeExecIt)
{
	*this = src;
}

AForm::~AForm(void)
{
	// std::cout << this->_cName << " AForm Destructor call" << std::endl;
}

/* OPERATOR */
AForm & AForm::operator=(AForm const & src)
{
	this->_isSigned = src._isSigned;
	return (*this);
}

/* FUNCTION*/

bool AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::string AForm::getNameForm(void) const
{
	return (this->_cName);
}

unsigned int AForm::getGradeSignIt(void) const
{
	return (this->_cGradeSignIt);
}

unsigned int AForm::getExecIt(void) const
{
	return (this->_cGradeExecIt);
}

void AForm::beSigned(Bureaucrat & theBureaucrat)
{
	try
	{
		if (theBureaucrat.getGrade() > this->_cGradeSignIt)
			throw AForm::GradeTooLowException();
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
	catch(AForm::GradeTooLowException & e)
	{
		std::cerr << this->_cName << e.what() << " for signed"<< std::endl;
	}
}
