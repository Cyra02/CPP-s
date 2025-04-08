/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:54:44 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/07 14:31:20 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string rogue = "Chillchuck";
	ScavTrap	Mimic("Chest");
    ClapTrap    Human("Cyra");


    std::cout << "ClapTrap -> " << Human.getname() << "\nHealth -> " << Human.getHealth() << "\nEnergy -> " << Human.getEnergy() << "\nAttack damage -> " << Human.getAttack() << std::endl;
    std::cout << "ScavTrap -> " << Mimic.getname() << "\nHealth -> " << Mimic.getHealth() << "\nEnergy -> " << Mimic.getEnergy() << "\nAttack damage -> " << Mimic.getAttack() << std::endl;

    Mimic.attack("Cyra");
    Human.takeDamage(20);
	/*Mimic.attack(rogue);
	Mimic.beRepaired(10);
	Mimic.takeDamage(18);
	Mimic.attack(rogue);
	Mimic.guardGate();
	Mimic.takeDamage(500);
	Mimic.guardGate();
	Mimic.attack(rogue);*/
}