#include "Data.hpp"

Data::Data( void ) : _x(0), _y(0), _z(0)
{
	// std::cout << "Data default constructor call" << std::endl;

}

Data::Data( int x, int y, int z ) : _x(x), _y(y), _z(z)
{
	// std::cout << "Data constructor call" << std::endl;
}

Data::Data( const Data& src ) : _x(src._x), _y(src._y), _z(src._z)
{
	// std::cout << "Data constructor by copy call" << std::endl;
}

Data::~Data( void )
{
	// std::cout << "Data destructor call" << std::endl;
}

Data&	Data::operator=( const Data& rhs ) {

	if (this != &rhs) {
		this->_x = rhs._x;
		this->_y = rhs._y;
		this->_z = rhs._z;
	}
	return (*this);
}
