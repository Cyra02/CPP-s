/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:00:03 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/11 13:01:07 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c;
std::cout << ++c << std::endl;
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

/* std::cout << (a > b) << std::endl;
std::cout << (a < b) << std::endl;
std::cout << (a >= b) << std::endl;
std::cout << (a <= b) << std::endl;
std::cout << (a == b) << std::endl;
std::cout << (a == a) << std::endl;
std::cout << (a != b) << std::endl;
std::cout << (a != a) << std::endl;

std::cout << "max min" << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
std::cout << Fixed::min( a, c ) << std::endl;
std::cout << Fixed::max( a, c ) << std::endl;

std::cout << a << " + " << b << " = " << (a + b) << std::endl;
std::cout << a << " - " << b << " = " << (a - b) << std::endl;
std::cout << a << " * " << b << " = " << (a * b) << std::endl;
std::cout << a << " / " << b << " = " << (a / b) << std::endl;
 */
return 0;
}