#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>
#include <cstdlib>


class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;

		bool	_isFomatDateValid(const std::string &date) const ;
		int		_isDateValid(const std::string &date) ;

		int		_createDataMap(std::string fileName);
		void	_push(const std::string &date, const std::string &exchangeRate);
		int		_btc(std::string path);
		float	_howMuchBc(const std::string &date);

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange(void);

		BitcoinExchange & operator=(const BitcoinExchange &src);

		int printError(std::string str);
		int BitcoinChange(std::string fileName);
		void printMap(void);
};