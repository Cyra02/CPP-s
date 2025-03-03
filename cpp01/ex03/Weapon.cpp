/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:01:43 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:49:37 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	
}

Weapon::Weapon(std::string new_type) {
	type = new_type;
}

Weapon::~Weapon() {

}

std::string	Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string new_type) {
	type = new_type;
}