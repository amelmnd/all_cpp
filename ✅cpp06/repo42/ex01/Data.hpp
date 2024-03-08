#pragma once

#include <iostream>

class Data {
	private:
		int	_x;
		int	_y;
		int	_z;

	public:
		Data( void );
		Data( int x, int y, int z);
		Data( const Data& src );
		~Data( void );

		Data&	operator=( const Data& rhs );
};
