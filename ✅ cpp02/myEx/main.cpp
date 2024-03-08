/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 03:16:18 by sfernand          #+#    #+#             */
/*   Updated: 2024/01/10 13:40:30 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
	Fixed c = 3;
	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	if (a < c)
		std::cout << "a inf" <<std::endl;
	if (a > c)
		std::cout << "a sup" <<std::endl;
	if (a <= c)
		std::cout << "a inf ou egal" <<std::endl;
	if (a >= c)
		std::cout << "a sup ou egal" <<std::endl;
	if (a != c)
		std::cout << "a dif c" <<std::endl;
	if (a == c)
		std::cout << "a egal c" <<std::endl;
	c = -3;
	std::cout << "c = " << c << std::endl;
	if (a < c)
		std::cout << "a inf" <<std::endl;
	if (a > c)
		std::cout << "a sup" <<std::endl;
	if (a <= c)
		std::cout << "a inf ou egal" <<std::endl;
	if (a >= c)
		std::cout << "a sup ou egal" <<std::endl;
	if (a != c)
		std::cout << "a dif c" <<std::endl;
	if (a == c)
		std::cout << "a egal c" <<std::endl;
	c = 0;
	std::cout << "c = " << c << std::endl;
	if (a < c)
		std::cout << "a inf" <<std::endl;
	if (a > c)
		std::cout << "a sup" <<std::endl;
	if (a <= c)
		std::cout << "a inf ou egal" <<std::endl;
	if (a >= c)
		std::cout << "a sup ou egal" <<std::endl;
	if (a != c)
		std::cout << "a dif c" <<std::endl;
	if (a == c)
		std::cout << "a egal c" <<std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d = 2;
	Fixed const e(10.5f);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "max a b = ";
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "min a b = ";
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "max a c = ";
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << "min a c = ";
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e - d = " << e - d << std::endl;
	std::cout << "e + d = " << e + d << std::endl;
	std::cout << "e / d = " << e / d << std::endl;
	std::cout << "e * d = " << e * d << std::endl;
	return 0;
}