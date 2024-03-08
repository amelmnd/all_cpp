
#include "ScalarConverter.hpp"

char		ScalarConverter::_charV = 0;
long int	ScalarConverter::_intV = 0;
double		ScalarConverter::_floatV = 0;
long double	ScalarConverter::_doubleV = 0;

bool		ScalarConverter::_errorPrint = false;

std::string	ScalarConverter::_charMsg = "";
std::string	ScalarConverter::_intMsg = "";
std::string	ScalarConverter::_floatMsg = "";
std::string	ScalarConverter::_doubleMsg = "";

/*** Constructor & destructor ***/

ScalarConverter::ScalarConverter( void )
{
	// std::cout << "ScalarConverter constructor call" << std::endl;
}

ScalarConverter::ScalarConverter( const char *arg )
{
	detectType(arg);
}

ScalarConverter::~ScalarConverter( void )
{
	// std::cout << "ScalarConverter destructor call" << std::endl;

}
/*** Getters ***/

char	ScalarConverter::getChar( void ) {

	return (_charV);
}

int		ScalarConverter::getInt( void ) {

	return (_intV);
}

float	ScalarConverter::getFloat( void ) {

	return (_floatV);
}

double	ScalarConverter::getDouble( void ) {

	return (_doubleV);
}

/*** Functions ***/

void	ScalarConverter::printAll( void ) {

	if (_errorPrint)
		return;
	std::cout << "char: ";
	if (!_charMsg.empty())
		std::cout << _charMsg << std::endl;
	else
		std::cout << "'" << _charV << "'" << std::endl;
	std::cout << "int: ";
	if (!_intMsg.empty())
		std::cout << _intMsg << std::endl;
	else
		std::cout << _intV << std::endl;
	std::cout << "float: ";
	if (!_floatMsg.empty())
		std::cout << _floatMsg << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(5);
		std::cout << _floatV << "f" << std::endl;
	}
	std::cout << "double: ";
	if (!_doubleMsg.empty())
		std::cout << _doubleMsg << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(7);
		std::cout << _doubleV << std::endl;
	}
}

void	ScalarConverter::detectType( const char *arg ) {

	if (strlen(arg) == 1 && !(arg[0] >= '0' && arg[0] <= '9'))
		toChar(arg[0]);
	else if (isInt(arg))
		toInt(arg);
	else if (isFloat(arg))
		toFloat(arg);
	else if (isDouble(arg))
		toDouble(arg);
	else
	{
		_errorPrint = true;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void	ScalarConverter::toChar( const char c ) {

	int	intC = static_cast<int>(c);
	if (intC >= 0 && intC <= 127)
	{
		if (intC >= 33 && intC <= 126)
			_charV = c;
		else
			_charMsg = "Non displayable";
	}
	else
		_charMsg = "impossible";
	_intV = static_cast<int>(c);
	_floatV = static_cast<float>(c);
	_doubleV = static_cast<double>(c);
}

void	ScalarConverter::toInt( const char *arg ) {

	long long	tmp = std::atoll(arg);

	if (strlen(arg) > 11 || (INT_MAX < tmp || INT_MIN > tmp))
	{
		_intMsg = "impossible";
		return;
	}
	_intV = static_cast<int>(tmp);
	if (_intV >= 33 && _intV <= 126)
		_charV = static_cast<char>(_intV);
	else if (_intV >= 0 && _intV <= 127)
		_charMsg = "Non displayable";
	else
		_charMsg = "impossible";
	if (_intV > FLT_MAX && _intV < FLT_MIN)
		_floatMsg = "impossible";
	else
		_floatV = static_cast<float>(_intV);
	if (_intV > DBL_MAX && _intV < DBL_MIN)
		_doubleMsg = "impossible";
	else
		_doubleV = static_cast<double>(_intV);
}

void	ScalarConverter::toFloat( const char *arg ) {

	char		*endptr = NULL;
	float		tmp = std::strtof(arg, &endptr);

	if ((endptr[0] != '\0' && endptr[0] != 'f') || errno || (!(tmp == INFINITY)
			&& (tmp == HUGE_VALL || tmp == HUGE_VAL || tmp == HUGE_VALF)))
		_floatMsg = "impossible";
	else
		_floatV = static_cast<float>(tmp);
	long	intTmp = static_cast<int>(roundf(_floatV));
	if (intTmp >= 33 && intTmp <= 126)
		_charV = static_cast<char>(intTmp);
	else if (intTmp >= 0 && intTmp <= 127)
		_charMsg = "Non displayable";
	else
		_charMsg = "impossible";
	if (intTmp < INT_MIN || intTmp > INT_MAX || tmp == INFINITY
			|| tmp == -INFINITY || std::isnan(tmp))
		_intMsg = "impossible";
	else
		_intV = roundf(static_cast<int>(tmp));

	if (errno || (!(tmp == INFINITY) && (tmp == HUGE_VALL
		|| tmp == HUGE_VAL || tmp == HUGE_VALF)))
		_doubleMsg = "impossible";
	else
		_doubleV = static_cast<double>(tmp);
}

void	ScalarConverter::toDouble( const char *arg ) {

	char	*endptr = NULL;
	double	tmp = std::strtod(arg, &endptr);

	if (endptr[0] != '\0' || errno || (!(tmp == INFINITY) && (tmp == HUGE_VALL
		|| tmp == HUGE_VAL || tmp == HUGE_VALF)))
	{
		_doubleMsg = "impossible";
	}
	else
		_doubleV = static_cast<double>(tmp);
	long	intTmp = static_cast<int>(roundf(_floatV));
	if (intTmp >= 33 && intTmp <= 126)
		_charV = static_cast<char>(intTmp);
	else if (intTmp >= 0 && intTmp <= 127)
		_charMsg = "Non displayable";
	else
		_charMsg = "impossible";

	if (intTmp < INT_MIN || intTmp > INT_MAX || tmp == INFINITY
			|| tmp == -INFINITY || std::isnan(tmp))
		_intMsg = "impossible";
	else
		_intV = roundf(static_cast<int>(tmp));

	if (errno || (!(tmp == INFINITY) && (tmp == HUGE_VALL
		|| tmp == HUGE_VAL || tmp == HUGE_VALF)))
	{
		_floatMsg = "impossible";
		return;
	}
	endptr = NULL;
	tmp = std::strtof(arg, &endptr);
	if (endptr[0] != '\0' || errno || (!(tmp == INFINITY) && (tmp == HUGE_VALL
		|| tmp == HUGE_VAL || tmp == HUGE_VALF)))
		_floatMsg = "impossible";
	else
		_floatV = static_cast<float>(tmp);
}

/* isType */
bool	ScalarConverter::isInt( const char *arg ) {

	size_t	sign = 0;

	if (arg[sign] == '-')
		sign++;
	for (size_t i = sign; i < strlen(arg); i++) {
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isFloat( const char *arg ) {

	size_t	sign = 0;
	size_t	decimal = 0;

	if (arg[sign] == '-')
		sign++;
	if (!strcmp(arg, "-inff") || !strcmp(arg, "+inff")
			|| !strcmp(arg, "nanf"))
		return (true);
	for (size_t i = sign; i < strlen(arg); i++) {

		if (arg[i] == 'f' && arg[i + 1] == '\0'
				&& arg[i - 1] >= '0' && arg[i - 1] <= '9')
			return (true);
		if (arg[i] == '.')
		{
			decimal = i;
			if (!(i != 0 && (arg[i + 1] >= '0' && arg[i + 1] <= '9'))
					|| strlen(arg) - decimal > 7)
			{
				return (false);
			}
		}
		else if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			return (false);
		}
	}
	return (true);
}

bool	ScalarConverter::isDouble( const char *arg ) {

	size_t	sign = 0;

	if (arg[sign] == '-')
		sign++;
	if (!strcmp(arg, "-inf") || !strcmp(arg, "+inf")
		|| !strcmp(arg, "nan"))
		return (true);
	for (size_t i = sign; i < std::strlen(arg); i++) {

		if (arg[i] == '.')
		{
			if (!(i != 0 && (arg[i + 1] >= '0' && arg[i + 1] <= '9')))
				return (false);
		}
		else if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (false);
	}
	return (true);
}

