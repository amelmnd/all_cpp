#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat elEmploy = Bureaucrat("elEmploy", 149);
	Bureaucrat elExecutive = Bureaucrat("elExecutive", 136);
	Bureaucrat elPatron = Bureaucrat("elPatron", 44);
	Bureaucrat elPresident = Bureaucrat("elPresident", 1);
	std::cout << std::endl;

	// EMPLOY
	std::cout << elEmploy << std::endl;
	std::cout << elExecutive << std::endl;
	std::cout << elPatron << std::endl;
	std::cout << elPresident << std::endl;

	std::cout << std::endl << "______ ShrubberyCreationForm ______" << std::endl;

	ShrubberyCreationForm sCFNotSigned = ShrubberyCreationForm("SCF0");
	sCFNotSigned.execute(elEmploy);
	sCFNotSigned.execute(elExecutive);
	sCFNotSigned.execute(elPatron);
	sCFNotSigned.execute(elPresident);
	std::cout << std::endl;


	ShrubberyCreationForm sCFSigned = ShrubberyCreationForm("SCF");
	sCFSigned.beSigned(elEmploy);
	sCFSigned.execute(elEmploy);
	elEmploy.executeForm(sCFSigned);
	std::cout << std::endl;

	sCFSigned.beSigned(elExecutive);
	sCFSigned.execute(elExecutive);
	elExecutive.executeForm(sCFSigned);
	std::cout << std::endl;

	sCFSigned.beSigned(elPatron);
	sCFSigned.execute(elPatron);
	elPatron.executeForm(sCFSigned);
	std::cout << std::endl;

	sCFSigned.beSigned(elPresident);
	sCFSigned.execute(elPresident);
	elPresident.executeForm(sCFSigned);
	std::cout << std::endl;

	// std::cout << std::endl << "______ RobotomyRequestForm ______" << std::endl;

	RobotomyRequestForm rRFNotSigned = RobotomyRequestForm("SCF0");
	rRFNotSigned.execute(elEmploy);
	rRFNotSigned.execute(elExecutive);
	rRFNotSigned.execute(elPatron);
	rRFNotSigned.execute(elPresident);
	std::cout << std::endl;


	RobotomyRequestForm rRFSigned = RobotomyRequestForm("SCF");
	rRFSigned.beSigned(elEmploy);
	rRFSigned.execute(elEmploy);
	elEmploy.executeForm(rRFSigned);
	std::cout << std::endl;

	rRFSigned.beSigned(elExecutive);
	rRFSigned.execute(elExecutive);
	elExecutive.executeForm(rRFSigned);
	std::cout << std::endl;

	rRFSigned.beSigned(elPatron);
	rRFSigned.execute(elPatron);
	elPatron.executeForm(rRFSigned);
	std::cout << std::endl;

	rRFSigned.beSigned(elPresident);
	rRFSigned.execute(elPresident);
	elPresident.executeForm(rRFSigned);
	std::cout << std::endl;

	// std::cout << std::endl << "______ PresidentialPardonForm ______" << std::endl;

	PresidentialPardonForm pPFNotSigned = PresidentialPardonForm("SCF0");
	pPFNotSigned.execute(elEmploy);
	pPFNotSigned.execute(elExecutive);
	pPFNotSigned.execute(elPatron);
	pPFNotSigned.execute(elPresident);
	std::cout << std::endl;


	PresidentialPardonForm pPFSigned = PresidentialPardonForm("SCF");
	pPFSigned.beSigned(elEmploy);
	pPFSigned.execute(elEmploy);
	elEmploy.executeForm(pPFSigned);
	std::cout << std::endl;

	pPFSigned.beSigned(elExecutive);
	pPFSigned.execute(elExecutive);
	elExecutive.executeForm(pPFSigned);
	std::cout << std::endl;

	pPFSigned.beSigned(elPatron);
	pPFSigned.execute(elPatron);
	elPatron.executeForm(pPFSigned);
	std::cout << std::endl;

	pPFSigned.beSigned(elPresident);
	pPFSigned.execute(elPresident);
	elPresident.executeForm(pPFSigned);
	std::cout << std::endl;

	std::cout << std::endl;
	return (0);
}