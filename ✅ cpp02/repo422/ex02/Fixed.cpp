#include "Fixed.hpp"

/**
 * Constructors and Destructors
 */
Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::Fixed(const int n):_raw(n << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float f) : _raw((int)(f * (1 << _bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/**
 * 	Operator Overload
 */

Fixed & Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return (*this);
}

bool Fixed::operator>( Fixed const &rhs ) const {
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<( Fixed const &rhs ) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=( Fixed const &rhs ) const {
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=( Fixed const &rhs ) const {
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==( Fixed const &rhs ) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=( Fixed const &rhs ) const {
	return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+( const Fixed &rhs ) const {
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-( const Fixed &rhs ) const {
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*( const Fixed &rhs ) const {
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( const Fixed &rhs ) const {
	return (this->toFloat() / rhs.toFloat());
}

Fixed   Fixed::operator++( int ) {
	Fixed tmp( *this );
	tmp._raw = this->_raw++;
	return tmp;
}

Fixed   Fixed::operator--( int ) {
	Fixed tmp( *this );
	tmp._raw = this->_raw++;
	return tmp;
}

Fixed&  Fixed::operator++( void ) {
	++this->_raw;
	return *this;
}

Fixed&  Fixed::operator--( void ) {
	--this->_raw;
	return *this;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &i ) {

	o << i.toFloat();
	return (o);
}

/**
 * Member Function
 */

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void Fixed::setRawBits( int const raw )
{
	this->_raw = raw;
}

int Fixed::toInt(void) const
{
	return _raw >> _bits;
}

float Fixed::toFloat(void) const
{
	return (float)_raw / (1 << _bits);
}