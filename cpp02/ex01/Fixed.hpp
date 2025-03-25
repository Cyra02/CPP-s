/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:20:27 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/10 13:42:10 by ciestrad         ###   ########.fr       */
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

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float 	toFloat(void) const;
			int 	toInt(void) const;

			
};

std::ostream &operator<<(std::ostream &os, const class Fixed &fixed);

#endif 