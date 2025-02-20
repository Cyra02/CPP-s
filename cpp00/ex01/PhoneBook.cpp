/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:42:01 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/20 13:31:34 by cyra             ###   ########.fr       */
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

std::string Field(const std::string& field)
{
	if (field.length() > 10)
		return field.substr(0,9) + ".";
	return field;
}

PhoneBook::PhoneBook(void)
{
	count = 0;
	count2 = 0;
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
		if (input == "BACK")
			return;
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
			while(input.empty() || !is_number(input) /* || input.size() != 9 */)
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
	if(count >= 8)
	{
		this->count2++;
		this->contactos[count2 - 1] = new_contact;
		if(count2 >= 8)
			count2 = 0;
		
	}
	else
	{
		this->count++;
		this->contactos[count - 1] = new_contact;
	}
		
	std::cout << ">Contact ADDED<" << std::endl;
}
void PhoneBook::getcontact(void)
{
	size_t i = 1;
	if(count == 0)
	{
		std::cout << ">No contact ADDED<" << std::endl;
		return;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|\n" <<  std::endl;
	while(i <= count)
	{
		std::cout << "|" << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << Field(contactos[i-1].getFirstName()) << "|" ;
		std::cout << std::right << std::setw(10) << Field(contactos[i-1].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << Field(contactos[i-1].getNickname()) << "|";
		std::cout << std::endl;
		i++;
	}
	std::string index;
	while(1)
	{
		std::cout << "Insert Contact INDEX" << std::endl;
		std::cout << ">";
		std::getline(std::cin, index);
		if (index == "BACK")
			return;
		if(index.size() == 1 && index[0] >= '0' && index[0] <= '8')
		{
			int index2 = index[0] - '1';
			if(contactos[index2].getFirstName().empty() ||
				contactos[index2].getLastName().empty() ||
				contactos[index2].getNickname().empty() ||
				contactos[index2].getPhoneName().empty() ||
				contactos[index2].getSecret().empty())
			{
				std::cout << "Contact not filed" << std::endl;
				return;
				
			}
			
			std::cout << "First Name: " << contactos[index2].getFirstName() << std::endl;
			std::cout << "Last Name: " << contactos[index2].getLastName() << std::endl;
			std::cout << "Nickname: " << contactos[index2].getNickname() << std::endl;
			std::cout << "Phonenumber: " << contactos[index2].getPhoneName() << std::endl;
			std::cout << "Darkest Secret: " << contactos[index2].getSecret() << std::endl;
		}
		else
		{
			std::cout << "Invalid Index: " << std::endl;
			std::cout << "Try Again: " << std::endl;
			std::cout << ">";
			//std::getline(std::cin, index);
			
		}
		
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