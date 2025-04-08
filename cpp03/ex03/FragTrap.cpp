/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:06:45 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/08 11:24:15 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	setname("-");
	setHealth(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string new_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setname(new_name);
	setHealth(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap(const FragTrap &to_copy)
{
	if(this == &to_copy)
		return ;
	std::cout << "Copy FragTrap constructor called" << std::endl;
    setname(to_copy.getname());
    setHealth(to_copy.getHealth());
    setEnergy(to_copy.getEnergy());
    setAttack(to_copy.getAttack());
	
}

FragTrap &FragTrap::operator=(const FragTrap &to_copy)
{
	if(this == &to_copy)
	return (*this);
	std::cout << "Copy FragTrap constructor called" << std::endl;
	setname(to_copy.getname());
	setHealth(to_copy.getHealth());
	setEnergy(to_copy.getEnergy());
	setAttack(to_copy.getAttack());

	return(*this);
}

void FragTrap::highFivesGuys()
{
	if (getHealth() <= 0)
		std::cout << "He is dead" << std::endl;
	else
		std::cout << "I'm " << getname() << " and now I will give you a high five :)" << std::endl;
}