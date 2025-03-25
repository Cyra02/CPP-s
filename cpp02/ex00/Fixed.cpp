/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:28:42 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/10 12:03:31 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	
}

Fixed::Fixed(class Fixed &copy)
{
	if(this == &copy)
		return;
	std::cout << "Copy constructor called" << std::endl;
	value = copy.value;
}




Fixed	&Fixed::operator=(class Fixed &copy)
{
	if(this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		value = copy.value;
	}
	return *this;
	
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}