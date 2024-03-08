#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "this is DEBUG" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "that is INFO" << std::endl;
	return ;
}
void Harl::warning(void)
{
	std::cout << "this is WARNING" << std::endl;
	return ;
}
void Harl::error(void)
{
	std::cout << "that is ERROR" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	std::string tabLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	fn fnPtr[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	for (size_t i = 0; i < 4; i++)
	{
		if (level.compare(tabLevel[i]) == 0)
		{
			(this->*(fnPtr[i]))();
			return;
		}
	}
	return ;
}