#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs("numbers");
	unsigned int dst;
	unsigned int dst2;

	ifs >> dst >> dst2;

	ifs.close();
	std::cout << dst << " " << dst2 << std::endl;

	//.
	std::ofstream ofs("test.out");
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
}