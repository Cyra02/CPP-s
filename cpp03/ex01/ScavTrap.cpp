/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:29:54 by cyra              #+#    #+#             */
/*   Updated: 2025/04/07 14:21:18 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Contructor ScavTrap called" << std::endl;
    
    setname("y");
    setHealth(100);
    setEnergy(50);
    setAttack(20);
    
}

ScavTrap::ScavTrap(std::string new_name)
{
    std::cout << "Name ScavTrap Contructor called" << std::endl;
    setname(new_name);
    setHealth(100);
    setEnergy(50);
    setAttack(20);
    
}

ScavTrap::ScavTrap(const ScavTrap &to_copy)
{
    if(this == &to_copy)
        return ;
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    setname(to_copy.getname());
    setHealth(to_copy.getHealth());
    setEnergy(to_copy.getEnergy());
    setAttack(to_copy.getAttack());
}

ScavTrap &ScavTrap::operator=(const ScavTrap &to_copy)
{
     if(this == &to_copy)
        return (*this);
    std::cout << "Operator=  ScavTrap called" << std::endl;
    setname(to_copy.getname());
    setHealth(to_copy.getHealth());
    setEnergy(to_copy.getEnergy());
    setAttack(to_copy.getAttack());

    return(*this);
    
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap -> " << getname() << " got destroyed" << std::endl;
    
}


void ScavTrap::attack(std::string target)
{
    if(getHealth() <= 0)
        std::cout << "He is dead" << std::endl;
    else if(getEnergy() <= 0)
        std::cout << "No energy" << std::endl;
    else
    {
        std::cout << "ScavTrap -> " << getname() << " attacks " << target << " causing " << getAttack() << " hit points" << std::endl;
        setEnergy(getEnergy() - 1); 
    }
    
    
}
void	ScavTrap::guardGate() {
	if (getHealth() <= 0)
		std::cout << "He is dead" << std::endl;
	else
		std::cout << "I'm " << getname() << " and now I'm in gate keeping mode" << std::endl;
}