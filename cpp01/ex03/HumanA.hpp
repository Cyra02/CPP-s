/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:43:49 by cyra              #+#    #+#             */
/*   Updated: 2025/03/03 12:52:02 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, class Weapon &new_weapon);
		~HumanA();
		
		void	attack();
	private:
		std::string		name;
		class Weapon	&weapon;
};

#endif