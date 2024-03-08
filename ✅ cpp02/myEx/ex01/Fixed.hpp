#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);

		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const & src);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		int toInt(void) const;
		float toFloat(void) const;

	private:
		int _raw;
		static int const _bits = 8;
};

std::ostream &	operator<<( std::ostream &o, Fixed const & i );


#endif