/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:28:38 by ciestrad          #+#    #+#             */
/*   Updated: 2025/07/02 13:54:37 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"






void ScalarConvert::convert(const std::string type)
{
	try
	{
		size_t pos;
		std::stof(type, &pos);
		if(pos != type.length() && pos != type.length() - 1 || (pos != type.length() - 1 && type[pos] != 'f' && type[pos] != 'F'))
		{
			return(std::cout << "Not Valid Input" << std::endl, void());
		}
	}
	catch(const std::exception& e)
	{
		return(std::cout << "Not Valid Input" << std::endl, void());
	}
	
	if(type.compare("nan") == 0  
		|| type.compare("nanf") == 0
		|| type.compare("inf") == 0
		|| type.compare("inff") == 0
		|| type.compare("-inf") == 0
		|| type.compare("-inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << type << std::endl;
		std::cout << "double: " << type << std::endl;
		return;
	}
	
	std::cout << "INPUT: " << type << std::endl;
	std::cout << "char: " << typechar(type) << std::endl;
	std::cout << "int: " << typeint(type) << std::endl;
	std::cout << "float: " << typefloat(type) << std::endl;
	std::cout << "double: " << typrdouble(type) << std::endl;
}