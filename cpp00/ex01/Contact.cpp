/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:15:53 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/12 13:22:40 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contacts::setFirstName(std::string input)
{
	this->first_name = input;
}

void Contacts::setLastName(std::string input)
{
	this->last_name = input;
}

void Contacts::setNickname(std::string input)
{
	this->nickname = input;
}
void Contacts::setPhoneName(std::string input)
{
	this->phone_number = input;
}
void Contacts::setSecret(std::string input)
{
	this->darkest_secret = input;
}




const std::string& Contacts::getFirstName(void) const
{
	return this->first_name;
}

const std::string& Contacts::getLastName(void) const
{
	return this->last_name;
}

const std::string& Contacts::getNickname(void) const
{
	return this->nickname;
}

const std::string& Contacts::getPhoneName(void) const
{
	return this->phone_number;
}

const std::string& Contacts::getSecret(void) const
{
	return this->darkest_secret;
}