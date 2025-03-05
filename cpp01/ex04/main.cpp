/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:50:03 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/05 11:29:12 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>


std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string swap = "";
	size_t		start = 0;
	size_t		str_size = line.size();

	for(size_t end = line.find(s1,0); end != std::string::npos; )
	{
		swap += line.substr(start, end - start) + s2;
		//std::cout << end << " " << s1.size() << std::endl;
		start = end + s1.size();
		end = line.find(s1, start);
	}
	if(start < str_size)
	{
		swap += line.substr(start , line.size());
		//printf("hola");
	}
	return(swap);
}
int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream infile;
	std::ofstream outfile;

	infile.open(filename, std::ios::in);
	if(!infile.is_open())
	{
		std::cout << "Couldn't open" << std::endl;
		return 0;
	}
	outfile.open(filename + ".replace", std::ios::out);
	if(!infile.is_open())
	{
		std::cout << "Can't create new file" << std::endl;
		infile.close();
		return 0;
	}
	std::string input;
	while (std::getline(infile, input))
	{
		outfile << ft_replace(input, s1, s2);
		if(!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return(0);
	
	
	
}