#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cfloat>
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <cstring>


class ScalarConverter {

	private:
		static char			_charV;
		static long int		_intV;
		static double		_floatV;
		static long double	_doubleV;

		static bool			_errorPrint;

		static std::string	_charMsg;
		static std::string	_intMsg;
		static std::string	_floatMsg;
		static std::string	_doubleMsg;

		ScalarConverter( const ScalarConverter& src );
		ScalarConverter&	operator=( const ScalarConverter& rhs );

	public:
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( const char *arg );

		static char		getChar( void );
		static int		getInt( void );
		static float	getFloat( void );
		static double	getDouble( void );

		static void	detectType( const char *arg );
		static void	printAll( void );
		static void	toChar( const char c );
		static void	toInt( const char *arg );
		static void	toFloat( const char *arg );
		static void	toDouble( const char *arg );
		static bool	isInt( const char *arg );
		static bool	isFloat( const char *arg );
		static bool	isDouble( const char *arg );
};
