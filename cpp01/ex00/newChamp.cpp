/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newChamp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:17:28 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 12:30:50 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	newchamp(std::string newname)
{
	Zombie newzombie;
	
	newzombie.setzombie(newname);
	newzombie.annaunce();
}