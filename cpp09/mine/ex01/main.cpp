#include "RPN.hpp"

int main (int ac, char ** av)
{
	RPN rpn = RPN();
	if (ac != 2)
		return (rpn.printError("format : ./RTN \"nb1 nb2 +\" "));
	else if (ac == 2)
		return (rpn.manageRpn(av[1]));
	return 0;
}