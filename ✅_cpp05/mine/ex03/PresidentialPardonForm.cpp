#include "PresidentialPardonForm.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
PresidentialPardonForm::PresidentialPardonForm(std::string const target): AForm(target, 25, 5), _cTarget(target)
{
	// std::cout << " PresidentialPardonForm constructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << " PresidentialPardonForm Destructor call" << std::endl;
}

/* OPERATOR */
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void)src;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_cTarget);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == false)
			throw AForm::HasNotSigned();
		else if (executor.getGrade() > this->getExecIt())
			throw AForm::GradeTooLowException();
		else
		{
			std::cout << "[PresidentialPardonForm] : " << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
	}
	catch(const GradeTooLowException& e)
	{
		std::cerr << executor.getName() << e.what() << " for exec " << this->getNameForm() << std::endl;
	}
	catch(const HasNotSigned &e)
	{
		std::cerr << this->getNameForm() << e.what() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << "Error while opening Shrubbery target file" << std::endl;

	}
}