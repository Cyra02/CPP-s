/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:54:44 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/08 12:17:42 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::string rogue = "Chillchuck";
	ScavTrap	Mimic("Chest");
    ClapTrap    Human("Cyra");
	FragTrap	Paco("Paco");


    std::cout << "ClapTrap -> " << Human.getname() << "\nHealth -> " << Human.getHealth() << "\nEnergy -> " << Human.getEnergy() << "\nAttack damage -> " << Human.getAttack() << std::endl;
    std::cout << "ScavTrap -> " << Mimic.getname() << "\nHealth -> " << Mimic.getHealth() << "\nEnergy -> " << Mimic.getEnergy() << "\nAttack damage -> " << Mimic.getAttack() << std::endl;
	std::cout << "FragTrap -> " << Paco.getname() << "\nHealth -> " << Paco.getHealth() << "\nEnergy -> " << Paco.getEnergy() << "\nAttack damage -> " << Paco.getAttack() << std::endl;
	
    Mimic.attack("Paco");
    Paco.takeDamage(20);
	Mimic.guardGate();
	Paco.highFivesGuys();
	/*Mimic.attack(rogue);
	Mimic.beRepaired(10);
	Mimic.takeDamage(18);
	Mimic.attack(rogue);
	Mimic.guardGate();
	Mimic.takeDamage(500);
	Mimic.guardGate();
	Mimic.attack(rogue);*/
}