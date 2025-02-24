/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:56:14 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 13:01:31 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*zombieHorde(int num, std::string name)
{
	Zombie *horda = new Zombie[num];

	for (int i = 0 ; i < num ; i++)
	{
		horda[i].setzombie(name);
	}
	return horda;
}