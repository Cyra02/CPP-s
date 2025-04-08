/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:21:32 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/08 12:47:10 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include  "ScavTrap.hpp"
#include  "FragTrap.hpp"

class DiamondTrap:  public ScavTrap, public FragTrap
{
	public:
			DiamondTrap();
			~DiamondTrap();
			DiamondTrap(std::string new_name);
			DiamondTrap(const DiamondTrap &to_copy);
			DiamondTrap &operator=(const DiamondTrap &to_copy);

			using	ScavTrap::attack;
	private:
			std::string	name;
};

#endif