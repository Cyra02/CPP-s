/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:23:38 by cyra              #+#    #+#             */
/*   Updated: 2025/04/07 13:51:50 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include  "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
			ScavTrap();
			~ScavTrap();
			ScavTrap(std::string new_name);
			ScavTrap(const ScavTrap &to_copy);
			ScavTrap &operator=(const ScavTrap &to_copy);
            
            void    attack(std::string);
            void    guardGate();

	private:
	
};

#endif