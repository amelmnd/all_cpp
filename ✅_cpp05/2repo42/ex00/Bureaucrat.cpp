#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("unnamed"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor call" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor call" << std::endl;
	try
	{
		if (grade < HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << this->_name << e.what() << std::endl;
		this->_grade = 1;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << this->_name  << e.what() << std::endl;
		this->_grade = 150;
	}
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat  const & src)
{
	std::cout << "Bureaucrat copy constructor call" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor call" << std::endl << std::endl;
	return;
}

/*********** OPERATOR **************/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src._grade;
	return (*this);
}

/*********** GETTER & SETTER **************/
unsigned int Bureaucrat::getGrade() const
{
	return (this->_grade);
}
std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void Bureaucrat::setAddGrade()
{
	try
	{
		if (this->_grade == HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << this->_name  <<  e.what() << std::endl;
	}
	return;
}

void Bureaucrat::setDeleteGrade()
{
	try
	{
		if (this->_grade == LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->_grade++;
		}
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << this->_name << e.what() << std::endl;
	}
	return;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName();
	o << ", bureaucrat grade ";
	o << src.getGrade();
	return o;
}
