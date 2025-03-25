/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:20:27 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/10 11:54:40 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
			int					value = 0;
			static const int	frac = 8;	

	public:
			Fixed();
			Fixed(class Fixed &copy);
			~Fixed();

			Fixed 	&operator=(class Fixed &copy);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			
};

#endif 