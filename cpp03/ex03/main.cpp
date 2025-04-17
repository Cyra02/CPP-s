/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:54:44 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/17 02:27:25 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
   std::string rogue = "Chillchuck";
	DiamondTrap	Mimic("Chest");

	std::cout << "DiamondTrap " << Mimic.getname() << " Has " << Mimic.getHealth() << " HP" << std::endl;
	std::cout << "DiamondTrap " << Mimic.getname() << " Has " << Mimic.getEnergy() << " EP" << std::endl;
	std::cout << "DiamondTrap " << Mimic.getname() << " Has " << Mimic.getHealth() << " AD" << std::endl;
	Mimic.attack(rogue);
	Mimic.beRepaired(10);
	Mimic.takeDamage(18);
	Mimic.attack(rogue);
	Mimic.whoAmI();
	Mimic.takeDamage(500);
	Mimic.attack(rogue);
}