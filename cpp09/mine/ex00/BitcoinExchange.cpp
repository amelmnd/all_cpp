#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	// std::cout << "BitcoinExchange constructor" << std::endl;
	return;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	// std::cout << "BitcoinExchange destructor" << std::endl;
	return;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	this->_data = src._data;
	return (*this);
}

int BitcoinExchange::printError(std::string str)
{
	if (str.length() > 0)
		std::cerr << "Error: " << str << std::endl;
	else
		std::cerr << "Error" << std::endl;
	return (1);
}

int BitcoinExchange::BitcoinChange(std::string fileName)
{
	(void)fileName;
	if (_createDataMap("data.csv") == 1)
		return 1;
	if (_btc(fileName) == 1)
		return 1;
	return 0;
}

int BitcoinExchange::_createDataMap(std::string path)
{
	std::ifstream file(path.c_str());
	std::string line;

	if (!file.is_open())
		return (printError("invalid file"));
	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate" || line == "date, exchange_rate")
				continue;
		std::string date = line.substr(0, 10);
		std::string exchangeRate = line.substr(11, line.length());
		_push(date, exchangeRate);
	}
	file.close();
	return 0;
}

void	BitcoinExchange::_push(const std::string &date, const std::string &exchangeRate)
{
	this->_data.insert(std::make_pair(date, atof(exchangeRate.c_str())));
}


int BitcoinExchange::_btc(std::string path)
{
	std::ifstream file(path.c_str());
	std::string line;
	std::string date;
	float value;
	float result;

	if (!file.is_open())
		return (printError("invalid file"));

	while (std::getline(file, line))
	{

		if (line == "date | value" || line == "date|value")
		{
			printError("header line");
			continue;
		}
		try
		{
			if (line.length() == 0)
				throw std::invalid_argument("empty line in " + path + " file");
			int space = line.find(" ");
			date = line.substr(0, space);
			if (_isDateValid(date) == 1)
				throw std::invalid_argument("invalid date format => " + date);
			std::string valueStr = line.substr(13, line.length());
			if (valueStr.empty())
				throw std::invalid_argument("empty value");
			value = (atof(line.substr(13, line.length()).c_str()));
			if (value < 0)
				throw std::invalid_argument("not a positive number");
			if (value > 1000)
				throw std::invalid_argument("too large a number");
			result = _howMuchBc(date) * value;
			std::cout << date << " => " << value << " = " << result << std::endl;
		}
		catch (const std::invalid_argument& e)
		{
			printError(e.what());
			continue;
		}
		catch(const std::exception& e)
		{
			continue;
		}
	}
	file.close();

	return 0;
}

int	BitcoinExchange::_isDateValid(const std::string &date)
{
	if (date.length() != 10)
        return 1;
	for (int i = 0; i < 10; i++)
	{
		if ((i == 4 || i == 7) && date[i] != '-')
				return 1;
		// else if (!isdigit(date[i]))
		// 		return 1;
	}
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	int	daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year < 2009 || year > 2024 || month < 1 || month > 12 || day > daysInMonths[month])
		return 1;
	return 0;
}

float	BitcoinExchange::_howMuchBc(const std::string &date)
{
	std::map<std::string, float>::iterator it = _data.lower_bound(date);
	if (it == _data.begin() && date < it->first) {
		return it->second;
	}
	if (it != _data.begin() && (it == _data.end() || date < it->first))
		it--;
	return it->second;
}


