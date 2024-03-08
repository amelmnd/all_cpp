#include "Harl.hpp"

int main()
{
	std::string cmd = "";
	Harl* harl = new Harl();
	std::cout << "Welcome to Harl 2.0" << std::endl;

	while (cmd.compare("EXIT"))
	{
		std::cout << "Commands available = 'DEBUG', 'INFO', 'WARNING', 'ERROR', 'EXIT'" << std::endl;
		cmd = "";
		std::getline(std::cin, cmd);
		if (std::cin.eof() )
			break;
		else
			harl->complain(cmd);
	}
	return (0);
}