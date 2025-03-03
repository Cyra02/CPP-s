/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:07:30 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:50:39 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		/* CONSTRUCTORS AND DESTRUCTORS */
		HumanB();
		HumanB(std::string name);
		~HumanB();

		/* SETTERS*/
		void	setWeapon(class Weapon &new_weapon);
		
		void	attack();
	private:
		std::string			name;
		class Weapon		*weapon = nullptr;
};

#endif