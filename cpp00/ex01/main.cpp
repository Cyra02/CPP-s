/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:12:16 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/17 11:43:17 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void molonchi()
{
	std::cout <<
"           ,-.\n" <<
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
		if(line == "SEARCH")
			phonebook.getcontact();
	}
}