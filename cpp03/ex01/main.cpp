/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:54:44 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/03 12:01:30 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Cyra("Cyra");
    ClapTrap Paco("Paco");
    
    std::cout << "ClapTrap -> " << Cyra.getname() << "\nHealth -> " << Cyra.getHealth() << "\nEnergy -> " << Cyra.getEnergy() << "\nAttack damage -> " << Cyra.getAttack() << std::endl;
    std::cout << "paco ClapTrap -> " << Paco.getname() << "\nHealth -> " << Paco.getHealth() << "\nEnergy -> " << Paco.getEnergy() << "\nAttack damage -> " << Paco.getAttack() << std::endl;

    
    Cyra.attack("Asier");
    Cyra.takeDamage(1);
    Cyra.beRepaired(5);
    Paco = Cyra;
    std::cout << "Paco ClapTrap -> " << Paco.getname() << "\nHealth -> " << Paco.getHealth() << "\nEnergy -> " << Paco.getEnergy() << "\nAttack damage -> " << Paco.getAttack() << std::endl;
    Cyra.takeDamage(4);
    return(0);
}