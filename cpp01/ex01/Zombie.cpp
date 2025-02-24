/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:54:33 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 12:55:14 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() {

}

void Zombie::setzombie(std::string zname)
{
	name = zname;
}

std::string Zombie::getzombie(void)
{
	return(name);
}

void Zombie::annaunce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destoyed" << std::endl;
}