/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:07:05 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:49:55 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		/* CONSTRUCTORS AND DESTRUCTORS */
		Weapon();
		Weapon(std::string new_type);
		~Weapon();
		
		/* SETTERS*/
		void		setType(std::string new_type);
		
		/* GETTERS */
		std::string	getType();
	private:
		std::string	type;
};

#endif