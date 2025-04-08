/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:06:51 by ciestrad          #+#    #+#             */
/*   Updated: 2025/04/08 12:50:18 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
			~FragTrap();
			FragTrap(std::string new_name);
			FragTrap(const FragTrap &to_copy);
			FragTrap &operator=(const FragTrap &to_copy);

			void highFivesGuys(void);
	
};

#endif
