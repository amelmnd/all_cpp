#include "RPN.hpp"

RPN::RPN(void)
{
	// std::cout << "RPN constructor call" << std::endl;
	this->_operands = 0;
	this->_operator = 0;
	return;
}

RPN::~RPN()
{
	// std::cout << "RPN destructor call" << std::endl;
	return;
}

int RPN::printError(std::string str)
{
	if (str.length() > 0)
		std::cerr << "Error: " << str << std::endl;
	else
		std::cerr << "Error" << std::endl;
	return (1);
}

int RPN::manageRpn(std::string av)
{
	for (size_t i = 0; i < av.length(); i++)
	{
		if (av[i] == ' ')
			continue;
		else if ((av[i] == '*' || av[i] == '+' || av[i] == '-' || av[i] == '/')
			&& this->_stack.size() >= 2)
		{
			if (_calculate(av[i]) == 1)
				return (1);
		}
		else if (isdigit(av[i]) > 0 )
			this->_stack.push((int)(av[i] - '0'));
		else
			return (this->printError(""));
	}
	if (this->_stack.size() == 1)
		std::cout << this->_stack.top() << std::endl;
	else
		return (this->printError(""));
	return 0;
}

int RPN::_calculate(char operatorChar)
{
	float nb1 = this->_stack.top();
	this->_stack.pop();
	float nb2 = this->_stack.top();
	this->_stack.pop();
	float result;

	switch (operatorChar) {
		case '+':
			result = nb2 + nb1;
			break;
		case '-':
			result = nb2 - nb1;
			break;
		case '*':
			result = nb2 * nb1;
			break;
		case '/':
			if (nb1 == 0)
				return (this->printError("division by zero"));
			result = nb2 / nb1;
			break;
		default:
			return (this->printError(""));
	}
	this->_stack.push(result);
	return 0;
}
