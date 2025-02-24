/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:18:09 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 12:33:04 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*newzombie = newZombie("pedro");
	newzombie->annaunce();
	newchamp("paco");
	delete newzombie;
	return 0;
	
}