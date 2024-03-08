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

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		int toInt(void) const;
		float toFloat(void) const;

		Fixed &operator=(Fixed const & src);

		bool	operator>( Fixed const &rhs ) const;
		bool	operator<( Fixed const &rhs ) const;
		bool	operator>=( Fixed const &rhs ) const;
		bool	operator<=( Fixed const &rhs ) const;
		bool	operator==( Fixed const &rhs ) const;
		bool	operator!=( Fixed const &rhs ) const;

		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;

		Fixed	operator++( int );
		Fixed	operator--( int );
		Fixed	&operator++( void );
		Fixed	&operator--( void );

		static Fixed& min( Fixed &a, Fixed &b );
		static const Fixed& min( const Fixed &a, const Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static const Fixed& max( const Fixed &a, const Fixed &b );

	private:
		int _raw;
		static int const _bits = 8;
};

std::ostream &	operator<<( std::ostream &o, Fixed const & i );


#endif