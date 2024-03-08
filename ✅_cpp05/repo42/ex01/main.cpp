#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat pipo = Bureaucrat("pipo", 45);

	Form adm = Form("adm", 45, 16);
	std::cout << std::endl << pipo << std::endl;
	pipo.signForm(adm);
	adm.beSigned(pipo);
	std::cout << pipo << std::endl << std::endl;

	pipo.setDeleteGrade();

	Form bail = Form("bail", 45, 16);
	pipo.signForm(bail);
	bail.beSigned(pipo);
	std::cout << std::endl;


	return (0);
}