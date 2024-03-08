#include "Intern.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
Intern::Intern()
{
	// std::cout << " Intern constructor call" << std::endl;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
	// std::cout << " Intern Destructor call" << std::endl;
}

/* OPERATOR */
Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

void ftToLower(std::string & str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
			str[i] = std::tolower(str[i]);
	}
}

AForm *newShrubbery(std::string const &target){
	return new ShrubberyCreationForm(target);
}

AForm *newRobotomy(std::string const &target){
	return new RobotomyRequestForm(target);
}

AForm *newPresidential(std::string const &target){
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string nameForm, std::string const target){
	std::string form[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
		};
	std::string const schForm[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
		};
	AForm *(*f[3])(std::string const &) = {
		&newShrubbery,
		&newRobotomy,
		&newPresidential
		};

	for (int i = 0; i < 3; i++)
	{
		ftToLower(nameForm);
		if (nameForm.compare(schForm[i]) == 0)
		{
			std::cout << "[Intern] : Intern creates " << form[i] << std::endl;
			return f[i](target);
		}
	}
	std::cout << "[Intern] Intern try to make a " << nameForm << "but it doesn't work." << std::endl;
	return NULL;
}