/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:21:44 by ciestrad          #+#    #+#             */
/*   Updated: 2025/07/02 13:34:09 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string> 
//https://github.com/JonahKoellner/CPP06/blob/main/ex00/ScalarConverter.cpp

class ScalarConvert
{
	public:
			ScalarConvert();
			~ScalarConvert();
			ScalarConvert(const ScalarConvert &model);
			ScalarConvert &operator=(const ScalarConvert &other);
	
			
	private:
			static void convert(const std::string type);
};

#endif