#include "Sample.hpp"

int main()
{
	Sample* foo = new Sample();
	char const c = 'e';
	int const i = 4;
	float const f = 5.2;
	Sample const &foo2 = Sample();

	foo->bar(c);
	foo->bar(i);
	foo->bar(f);
	foo->bar(foo2);
}