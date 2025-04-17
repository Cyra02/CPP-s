/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:21:32 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/17 02:23:03 by cyra             ###   ########.fr       */
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

			void whoAmI(void);
	private:
			std::string	name;
};

#endif