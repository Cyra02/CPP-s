/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:21:36 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/17 02:24:59 by cyra             ###   ########.fr       */
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
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	name = new_name;
	ClapTrap::setname(new_name + "_clap_name");
	setHealth(FragTrap::getHealth());
	setEnergy(ScavTrap::getEnergy());
	setAttack(FragTrap::getAttack());
	
}

DiamondTrap::DiamondTrap(const DiamondTrap &to_copy)
{
	std::cout << "DiamondTrap copy const(ructor called" << std::endl;

	if(this == &to_copy)
		return ;

	setname(to_copy.getname());
	setEnergy(to_copy.getEnergy());
	setHealth(to_copy.getHealth());
	setAttack(to_copy.getAttack());
	
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &to_copy)
{
	std::cout << "DiamondTrap operator  called" << std::endl;

	if(this == &to_copy)
		return (*this);

	ClapTrap::setname(to_copy.getname() + "_clap_name");
	setname(to_copy.getname());
	setEnergy(to_copy.getEnergy());
	setHealth(to_copy.getHealth());
	setAttack(to_copy.getAttack());

	return(*this);
	
}

void DiamondTrap::whoAmI(void){
	if(getEnergy() <= 0)
		std::cout << "I am dead" << std::endl;
	else
		std::cout << "DiamondTrap " << name << " may or may not be " << getname() << std::endl;
	
}
