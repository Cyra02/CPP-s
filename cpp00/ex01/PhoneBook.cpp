/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:42:01 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/11 13:26:14 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addcontact()
{
	Contacts	new_contact;
	std::string	input;

	std::cout << "Insert First Name" << std::endl;
	std::getline(std::cin, input);
	if (!is_number(input))
		new_contact.setFirstName(input);
	else
		std::cout << "el nombre conio" << std::endl;
		
	
}

bool	is_number(std::string to_check) {
	for (int i = 0; i < (int)to_check.length(); i++)
	{
		if (to_check[i] - 48 < 0 || to_check[i] - 48 > 9)
			return (false);
	}
	return (true);
}