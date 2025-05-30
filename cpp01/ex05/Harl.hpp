/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:38:28 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/05 11:52:26 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP


#include <string.h>
#include <iostream>

class Harl
{
	public:
			Harl();
			~Harl();
			void complain( std::string level );
	private:
			void debug( void );
			void info( void );
			void warning( void );
			void error( void ); 
	
};

#endif 