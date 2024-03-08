#include "MutantStack.hpp"


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top : "  << mstack.top() << std::endl;

	std::cout << "mstack.size : " << mstack.size() << std::endl;
	mstack.pop();

	std::cout << "mstack.size (after pop): " <<  mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();

	std::cout << "mstack.begin : " << *it << std::endl;
	std::cout << "mstack.end : " << *ite << std::endl;
	++it;
	std::cout << "mstack.begin after ++: " << *it << std::endl;
	--it;
	std::cout << "mstack.begin after --: " << *it << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

    std::cout << "std::stack<int> s copy mstack :" << std::endl;
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

	return 0;
}