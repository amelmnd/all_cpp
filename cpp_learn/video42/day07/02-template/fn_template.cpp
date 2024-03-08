#include <iostream>

template < typename T >
T max (T const & x, T const & y)
{
	return (x >= y ? x : y);
}

int foo(int x)
{
	std::cout << "long computing time" << std::endl;
}

int main( void )
{

	int a = 21;
	int b = 42;

	std::cout << "Max of "<< a << " and "<< b << " is "<< max<int>( a, b) <<std::endl; // explicite instanciation
	std::cout << "Max of "<< a << " and "<< b << " is "<< max(a, b) << std::endl; // implicite instnaciation

	float c = -1.7f;
	float d = 4.2f;
	std::cout << "Max of "<< c << " and "<< d << " is "<< max<float>( c, d) <<std::endl; // explicite instanciation
	std::cout << "Max of "<< c << " and "<< d << " is "<< max(c, d) << std::endl; // implicite instnaciation

	char e= 'a';
	char f= 'z';

	std::cout << "Max of "<< e << " and "<< f << " is "<< max<char>( e, f) <<std::endl; // explicite instanciation
	std::cout << "Max of "<< e << " and "<< f << " is "<< max(e, f) << std::endl; // implicite instnaciation


	/* NO PROBLEM HERE ... is diferent to C where this ios a problem*/
	int ret = max<int>(foo(a), foo(b)); // explicite instanciation
	std::cout << "Max of " << a << " and " << b << " is " << ret << std::endl;
}