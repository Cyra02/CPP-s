/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:42:01 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/13 11:27:51 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

int chack_contact(const Contacts contact)
{
	if(contact.getFirstName().empty() ||
		contact.getLastName().empty() ||
		contact.getNickname().empty() ||
		contact.getPhoneName().empty() ||
		contact.getSecret().empty())
		{
			return(0);
			std::cout << "Contact bad stored" << std::endl;
		}
	else	
		return(1);
}

PhoneBook::PhoneBook(void)
{
	count = 0;
}

void PhoneBook::addcontact()
{
	Contacts	new_contact;
	std::string	input;
	const std::string opcion[5] = {"First Name: ", "Last Name: ", "Nickname: ", "Phonename: ", "Darkest Secret: "};

	
	for(int i = 0 ; i <= 4; i++)
	{
		std::cout << "Insert " + opcion[i] << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		if(i == 3)
		{
			while(input.empty() || !is_number(input))
			{
				std::cout << "Invalid Phonenumber" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
			}
			new_contact.setFirstName(input);
			
		}
	}
	//std::cout << "venga" << new_contact.getFirstName() << std::endl;
	if(chack_contact(new_contact) == 0)
		return ;
	if(count > 8)
		this->contactos[count - 1] = new_contact;
	else
	{
		this->count++;
		this->contactos[count - 1] = new_contact;
	}
	
	
	/* std::cout << "Insert First Name" << std::endl;
	std::getline(std::cin, input);
	if (!is_number(input))
		new_contact.setFirstName(input);
	else
		std::cout << "el nombre conio" << std::endl; */
		
	
}

bool	is_number(std::string to_check) {
	for (int i = 0; i < (int)to_check.length(); i++)
	{
		if (to_check[i] - 48 < 0 || to_check[i] - 48 > 9)
			return (false);
	}
	return (true);
}