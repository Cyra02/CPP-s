/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:54:33 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/03 11:25:10 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	public:
			ClapTrap();
			~ClapTrap();
			ClapTrap(std::string new_name);
			ClapTrap(const ClapTrap &to_copy);
			ClapTrap &operator=(const ClapTrap &to_copy);

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

			int getHealth() const; //hit_points
			int getEnergy() const; //energy
			int getAttack() const; //attack_damge
			std::string getname() const;
	
	private:
			std::string name;
			int			hit_points;
			int			energy;
			int			attack_damge;
	
};

#endif