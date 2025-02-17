/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:18:49 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/17 11:40:06 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
		public:
				PhoneBook();
				void		addcontact();
				void		getcontact();
				//view
		public:
				size_t		count;
				Contacts	contactos[8];
				//numero maximo contactos
				//el pprimero
};

bool	is_number(std::string input);

#endif