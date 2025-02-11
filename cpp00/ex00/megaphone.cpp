/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:16:42 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/10 12:41:47 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string mayus(char *argv)
{
	std::string str_new = argv;
	
	for(int i = 0 ; i < (int)str_new.length() ; i++)
	{
		str_new[i] = std::toupper(argv[i]);
	}
	return (str_new);
}


int main(int argc, char **argv)
{
	std::string str;
	int i = 1; 
	
	if (argc >= 2 )
	{
		while(argc > i)
		{
			str = mayus(argv[i]);
			std::cout << str;
			if (i != argc - 1)
				std::cout << " ";
			i++;
		}		
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0); 
}