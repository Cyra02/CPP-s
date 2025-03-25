/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:28:42 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/11 12:54:33 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// CONSTRUCTORES Y DESTRUCTOR
Fixed::Fixed(): value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Interger constructor called" << std::endl;
	value = roundf(num * (1 << frac));
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << frac));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	
}

Fixed::Fixed(const class Fixed &copy)
{
	if(this == &copy)
		return ;
	//std::cout << "Copy constructor called" << std::endl;
	value = copy.value;
}
//




//Output


std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}


//---------OPERADORES ARITMETICOS----------

Fixed 	&Fixed::operator*(const Fixed &copy)
{
	this->setRawBits((this->getRawBits() * copy.getRawBits() >> frac));
	return(*this);
	
}

Fixed 	&Fixed::operator/(const  Fixed &copy)
{
	this->setRawBits((this->getRawBits() / copy.getRawBits() >> frac));
	return(*this);
	
}

Fixed 	&Fixed::operator+(const  Fixed &copy)
{
	this->setRawBits((this->getRawBits() + copy.getRawBits()));
	return(*this);
}

Fixed 	&Fixed::operator-(const  Fixed &copy)
{
	this->setRawBits((this->getRawBits() - copy.getRawBits()));
	return(*this);
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if(this != &copy)
	{
		//std::cout << "Copy assignment operator called" << std::endl;
		value = copy.value;
	}
	return *this;
	
}

//---------OPERADORES DE COMPARACION----------

bool	Fixed::operator>(const Fixed &other)
{
	if(this->getRawBits() > other.value)
		return(true);
	return(false);
}

bool	Fixed::operator>=(const Fixed &other)
{
	if(this->getRawBits() >= other.value)
		return(true);
	return(false);
	
}

bool	Fixed::operator<(const Fixed &other)
{
	if(this->getRawBits() < other.value)
		return(true);
	return(false);
	
}

bool	Fixed::operator<=(const Fixed &other)
{
	if(this->getRawBits() <= other.value)
		return(true);
	return(false);
	
}

bool	Fixed::operator==(const Fixed &other)
{
	if(this->getRawBits() == other.value)
		return(true);
	return(false);
	
}

bool	Fixed::operator!=(const Fixed &other)
{
	if(this->getRawBits() != other.value)
		return(true);
	return(false);
}

//---------OPERADORES DE INCREMENTO----------

Fixed 	&Fixed::operator++()
{
	++value;
	return(*this);
}

//postincremento
Fixed 	Fixed::operator++(int)
{
	Fixed temp = *this;
	++value;
	return(temp);
}

Fixed 	&Fixed::operator--()
{
	--value;
	return(*this);
}
//postdecremento
Fixed 	Fixed::operator--(int)
{
	Fixed temp = *this;
	--value;
	return(temp);
}
			
//------------MAXIMOS Y MINIMOS---------------

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	//std::cout << "el normal" << std::endl;
	if(num1 <= num2)
		return(num1);
	return(num2);
	
}
Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	//std::cout << "constante" << std::endl;
	if(num1.getRawBits() <= num2.getRawBits())
		return((Fixed &)num1);
	return((Fixed &)num2);
}
Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	//std::cout << "el normal" << std::endl;
	if(num1 >= num2)
		return(num1);
	return(num2);
}
Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	//std::cout << "constante" << std::endl;
	if(num1.getRawBits() >= num2.getRawBits())
		return((Fixed &)num1);
	return((Fixed &)num2);
	
}




//GET Y SET

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	
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
