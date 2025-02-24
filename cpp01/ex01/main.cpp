/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:46:41 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 13:06:43 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int zombinum = 4;
	std::string zombiename = "paco";
	Zombie *horda = zombieHorde(zombinum, zombiename);
	for (int i = 0 ; i < zombinum ; i++)
		horda[i].annaunce();
	delete[] horda;
}