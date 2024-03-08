#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat elEmploy = Bureaucrat("elEmploy", 149);
	Bureaucrat elExecutive = Bureaucrat("elExecutive", 136);
	Bureaucrat elPatron = Bureaucrat("elPatron", 44);
	Bureaucrat elPresident = Bureaucrat("elPresident", 1);
	Intern someRandomIntern;
	std::cout << std::endl;

	// EMPLOY
	std::cout << elEmploy << std::endl;
	std::cout << elExecutive << std::endl;
	std::cout << elPatron << std::endl;
	std::cout << elPresident << std::endl;

	std::cout << std::endl << "______ shrubbery creation ______" << std::endl;

	AForm* scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	scf->execute(elPresident);
	elEmploy.signForm(*scf);
	elPatron.signForm(*scf);
	std::cout << std::endl;

	scf->execute(elEmploy);
	scf->execute(elExecutive);
	scf->execute(elPatron);
	elPresident.executeForm(*scf);

	std::cout << std::endl << "___ robotomy request "<< std::endl;
	AForm* rrf = someRandomIntern.makeForm("robotomy request", "wally");
	rrf->execute(elPresident);
	elPatron.signForm(*rrf);
	elExecutive.signForm(*rrf);
	std::cout << std::endl;

	rrf->execute(elEmploy);
	rrf->execute(elExecutive);
	rrf->execute(elPatron);
	elPresident.executeForm(*rrf);

	std::cout << std::endl << "___ presidential pardon Form "<< std::endl;
	AForm* ppf = someRandomIntern.makeForm("presidential pardon", "excuse me");
	ppf->execute(elPresident);
	elExecutive.signForm(*ppf);
	elPresident.signForm(*ppf);
	std::cout << std::endl;

	ppf->execute(elEmploy);
	ppf->execute(elExecutive);
	ppf->execute(elPatron);
	elPresident.executeForm(*ppf);
	std::cout << std::endl;
	return (0);
}