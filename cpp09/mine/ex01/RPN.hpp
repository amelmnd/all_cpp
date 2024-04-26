#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cctype>

class RPN
{
	private:
		std::stack<float>	_stack;
		int _operands;
		int _operator;
		int _fillStack(int);
		int _calculate(char operatorChar);

	public:
		RPN(void);
		RPN(RPN const &rpn);
		~RPN(void);
		RPN	&operator=(RPN const &rpn);

		int printError(std::string str);
		int manageRpn(std::string str);
};