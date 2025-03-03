/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:08:57 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:50:17 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
	
}

HumanB::HumanB(std::string new_name) {
	name = new_name;
}

HumanB::~HumanB() {
	
}


void	HumanB::setWeapon(Weapon &new_weapon) {
	weapon = &new_weapon;
}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}