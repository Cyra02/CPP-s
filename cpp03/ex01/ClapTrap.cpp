/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:49:21 by cyra              #+#    #+#             */
/*   Updated: 2025/04/03 11:57:45 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Contructor called" << std::endl;
    
    name = "";
    hit_points = 10;
    energy = 10;
    attack_damge = 0;
    
}

ClapTrap::ClapTrap(std::string new_name)
{
    std::cout << "Name Contructor called" << std::endl;
    name = new_name;
    hit_points = 10;
    energy = 10;
    attack_damge = 0;
    
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
    if(this == &to_copy)
        return ;
    std::cout << "Copy constructor called" << std::endl;
    name = to_copy.getname();
    hit_points = to_copy.getHealth();
    energy = to_copy.getEnergy();
    attack_damge = to_copy.getAttack();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &to_copy)
{
     if(this == &to_copy)
        return (*this);
    std::cout << "Operator=  called" << std::endl;
    name = to_copy.getname();
    hit_points = to_copy.getHealth();
    energy = to_copy.getEnergy();
    attack_damge = to_copy.getAttack();

    return(*this);
    
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap -> " << getname() << " got destroyed" << std::endl;
    
}


void ClapTrap::attack(const std::string& target)
{
    if(getHealth() <= 0)
        std::cout << "He is dead" << std::endl;
    else if(getEnergy() <= 0)
        std::cout << "No energy" << std::endl;
    else
    {
        std::cout << "ClapTrap -> " << getname() << " attacks " << target << " causing " << getAttack() << " hit points" << std::endl;
        energy--; 
    }
    
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(getHealth() <= 0)
        std::cout << "He is dead" << std::endl;
    else 
    {
        hit_points -= amount;
        if(hit_points <= 0)
        {
            std::cout << "ClapTrap -> " << getname() << " gets hit. Causing " << amount << " hit points and died" << std::endl;
            hit_points = 0;
        }
        else
            std::cout << "ClapTrap -> " << getname() << " gets hit. Causing " << amount << " hit points and now has " <<  getHealth() << " health points" << std::endl;
    }       
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(getHealth() <= 0)
        std::cout << "He is dead" << std::endl;
    else if(getEnergy() <= 0)
        std::cout << "No energy" << std::endl;
    else
    {
        hit_points += amount;
        std::cout << "ClapTrap -> " << getname() << " has repaired  himself by " << amount << " health points. New health " << getHealth() << std::endl;
        energy--;
        
    }
    
}



int ClapTrap::getAttack() const
{
    return(attack_damge);
}

int ClapTrap::getHealth() const
{
    return(hit_points);
}

int ClapTrap::getEnergy() const
{
    return(energy);
}

std::string ClapTrap::getname() const
{
    return(name);   
}