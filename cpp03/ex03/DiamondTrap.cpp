/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:21:36 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/08 12:47:11 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	name = "?";
	ClapTrap::setname((std::string)"?" + "_clap_name");
	setHealth(FragTrap::getHealth());
	setEnergy(ScavTrap::getEnergy());
	setAttack(FragTrap::getAttack());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructord called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name)
{
	
}