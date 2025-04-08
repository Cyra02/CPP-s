/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:23:38 by cyra              #+#    #+#             */
/*   Updated: 2025/04/08 12:49:30 by ciestrad         ###   ########.fr       */
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