#include "ShrubberyCreationForm.hpp"

/* CONSTRUCTOR & DESTRUCTOR */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): AForm(target, 145, 137), _cTarget(target)
{
	// std::cout << " ShrubberyCreationForm constructor call" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << " ShrubberyCreationForm Destructor call" << std::endl;
}

/* OPERATOR */
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void)src;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_cTarget);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSigned() == false)
			throw AForm::HasNotSigned();
		else if (executor.getGrade() > this->getExecIt())
			throw AForm::GradeTooLowException();
		else
		{

			std::string nameFile = this->getTarget() + "_shrubbery";
			std::ofstream fileTree(nameFile.c_str());

			if (!fileTree.good())
				throw std::exception();

			fileTree <<
			"              * *\n"
			"           *    *  *\n"
			"      *  *    *     *  *\n"
			"     *     *    *  *    *\n"
			" * *   *    *    *    *   *\n"
			" *     *  *    * * .#  *   *\n"
			" *   *     * #.  .# *   *\n"
			"  *     \"#.  #: #\" * *    *\n"
			" *   * * \"#. ##\"       *\n"
			"   *       \"###\n"
			"             \"##\n"
			"              ##.\n"
			"              .##:\n"
			"              :###\n"
			"              ;###\n"
			"            ,####.\n"
			"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
			std::cout << "[ShrubberyCreationForm] : " << this->getNameForm()  << " exec by " << executor.getName() << std::endl;
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