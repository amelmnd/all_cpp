#include <iostream>

void byRef(int& nb)
{
	nb = 10;
}
void byConstRef(const int& nb)
{
	std::cout << "nbv : " << nb << std::endl;
}
int main()
{
	int numberOfBalls = 42;

	int *ballsPtr = &numberOfBalls;
	int &ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;

	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	byRef(ballsRef);
	byConstRef(ballsRef);
	return (0);
}
