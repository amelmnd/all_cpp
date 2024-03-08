#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat* bDefault = new Bureaucrat();
	std::cout << bDefault->getName() << " as grade " << bDefault->getGrade() << std::endl ;
	delete bDefault;

	Bureaucrat *pipo = new Bureaucrat("pipo", 15);
	std::cout << *pipo << std::endl;
	pipo->setAddGrade();
	std::cout << *pipo << std::endl;
	pipo->setDeleteGrade();
	std::cout << *pipo << std::endl;
	delete pipo;

	Bureaucrat *bToLow = new Bureaucrat("bToLow", 151);
	std::cout << *bToLow << std::endl;
	bToLow->setAddGrade();
	std::cout << *bToLow << std::endl;
	bToLow->setDeleteGrade();
	std::cout << *bToLow << std::endl;
	delete bToLow;

	Bureaucrat *bToHig = new Bureaucrat("bToHig", 0);
	std::cout << *bToHig << std::endl;
	bToHig->setAddGrade();
	std::cout << *bToHig << std::endl;
	bToHig->setDeleteGrade();
	std::cout << *bToHig << std::endl;
	delete bToHig;

	return (0);
}