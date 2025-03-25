/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:28:42 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/10 13:42:28 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// CONSTRUCTORES Y DESTRUCTOR
Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Interger constructor called" << std::endl;
	value = roundf(num * (1 << frac));
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << frac));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	
}

Fixed::Fixed(const class Fixed &copy)
{
	if(this == &copy)
		return;
	std::cout << "Copy constructor called" << std::endl;
	value = copy.value;
}
//




//OPERADORES

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if(this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		value = copy.value;
	}
	return *this;
	
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}
//





//GET Y SET

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return (roundf(value) / (1 << frac));
}

int Fixed::toInt(void) const
{
	return (value / (1 << frac));
}
