/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:47:01 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/24 13:31:24 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
			//Destructor
				~Zombie();
				Zombie();

				void		setzombie(std::string name);
				std::string	getzombie(void);
				void 		annaunce(void);


	private:
				std::string		name;
	
};


Zombie	*zombieHorde(int num, std::string name);

#endif