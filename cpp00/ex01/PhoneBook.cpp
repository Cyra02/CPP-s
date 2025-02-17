/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:42:01 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/17 12:28:53 by cyra             ###   ########.fr       */
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
		if(i == 0)
		{
			while(input.empty())
			{
				std::cout << "Invalid Input" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
				
			}
			new_contact.setFirstName(input);
		}
		if(i == 1)
		{
			while(input.empty())
			{
				std::cout << "Invalid Input" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
				
			}
			new_contact.setLastName(input);
		}
		if(i == 2)
		{
			while(input.empty())
			{
				std::cout << "Invalid Input" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
				
			}
			new_contact.setNickname(input);
		}
		if(i == 3)
		{
			while(input.empty() || !is_number(input))
			{
				std::cout << "Invalid Phonenumber" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
			}
			new_contact.setPhoneName(input);
			
		}
		if(i == 4)
		{
			while(input.empty())
			{
				std::cout << "Invalid Input" << std::endl;
				std::cout << "Try Again: " << std::endl;
				std::cout << ">";
				std::getline(std::cin, input);
				
			}
			new_contact.setSecret(input);
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
		
	std::cout << ">Contact ADDED<" << std::endl;
}
void PhoneBook::getcontact(void)
{
	int i = 0;
	if(count == 0)
	{
		std::cout << ">No contact ADDED<" << std::endl;
		return;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|\n" <<  std:endl;
	while(i < count)
	{
		std::cout << 
	}
	
}

bool	is_number(std::string to_check) {
	for (int i = 0; i < (int)to_check.length(); i++)
	{
		if (to_check[i] - 48 < 0 || to_check[i] - 48 > 9)
			return (false);
	}
	return (true);
}