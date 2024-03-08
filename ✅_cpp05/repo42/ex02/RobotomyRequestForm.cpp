#include "RobotomyRequestForm.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
RobotomyRequestForm::RobotomyRequestForm(std::string const target): AForm(target, 72, 45), _cTarget(target)
{
	// std::cout << " RobotomyRequestForm constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << " RobotomyRequestForm Destructor call" << std::endl;
}

/* OPERATOR */
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void)src;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_cTarget);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == false)
			throw AForm::HasNotSigned();
		else if (executor.getGrade() > this->getExecIt())
			throw AForm::GradeTooLowException();
		else
		{
			for (size_t i = 0; i < 3; i++)
			{
				if (i % 2)
					std::cout << this->_cTarget << " has been robotomized" << std::endl;
				else
					std::cout << "[RobotomyRequestForm] : " << this->_cTarget << "... robotomization failed!" << std::endl;
			}
			std::cout << "[RobotomyRequestForm] : " << this->getNameForm()  << " exec by " << executor.getName() << std::endl;
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