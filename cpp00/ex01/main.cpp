/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:12:16 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/11 12:50:02 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void molonchi()
{
	std::cout <<
"(          ,-.\n" <<
"           | |\n" <<
"           | |\n" <<
"  ,-\"\"\"\"\"\"\"-.|\n" <<
" /  __:::__()\\\n" <<
"J ._______. L\n" <<
"JJ,        .LL\n" <<
"|J|Contacts |L|\n" <<
"|||  -....  |||\n" <<
"L||  -....  ||J\n" <<
"LJ|  -....  |LJ\n" <<
"LJ._________,LJ\n" <<
"L ___     ___ J\n" <<
"| \\__)---(__/ |\n" <<
"J----(===)----L\n" <<
" L\\ \"-___-\" /J\n" <<
" |  -------  |\n" <<
" |           |\n" <<
" |   ADD     |\n" <<
" |   SEARCH  |\n" <<
" |   EXIT    |\n" <<
" |           |\n" <<
 " (-----------)" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	std::string	line;
	
	while(1)
	{
		molonchi();
		std::getline(std::cin, line);
		if(line == "ADD")
			phonebook.addcontact();
	}
}