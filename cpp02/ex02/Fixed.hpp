/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:20:27 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/11 12:42:21 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
			int					value = 0;
			static const int	frac = 8;	
			

	public:
			Fixed();
			Fixed(const int);
			Fixed(const float);
			Fixed(const class Fixed &copy);
			~Fixed();

			Fixed 	&operator=(const class Fixed &copy);
			bool	operator>(const Fixed &other);
			bool	operator>=(const Fixed &other);
			bool	operator<(const Fixed &other);
			bool	operator<=(const Fixed &other);
			bool	operator==(const Fixed &other);
			bool	operator!=(const Fixed &other);


			Fixed 	&operator*(const Fixed &copy);
			Fixed 	&operator/(const  Fixed &copy);
			Fixed 	&operator+(const  Fixed &copy);
			Fixed 	&operator-(const  Fixed &copy);

			Fixed 	&operator++();
			Fixed 	operator++(int);
			Fixed 	&operator--();
			Fixed 	operator--(int);
			
			static Fixed &min(Fixed &num1, Fixed &num2);
			static Fixed &min(const Fixed &num1, const Fixed &num2);
			static Fixed &max(Fixed &num1, Fixed &num2);
			static Fixed &max(const Fixed &num1, const Fixed &num2);
			

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float 	toFloat(void) const;
			int 	toInt(void) const;

			
};

std::ostream &operator<<(std::ostream &os, const class Fixed &fixed);

#endif 