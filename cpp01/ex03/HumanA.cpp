/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:57:28 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:52:24 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): name(new_name), weapon(new_weapon) {

}

HumanA::~HumanA() {
	
}


void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}