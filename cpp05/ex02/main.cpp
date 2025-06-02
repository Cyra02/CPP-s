/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/06/02 11:05:11 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat		sebas("sebas", 70);
	AForm			a32("a32", 60, 15);

	std::cout << sebas << std::endl;
	std::cout << a32 << std::endl;

	try
	{
		AForm	a34("a34", -1, 25);
	}
	catch(const std::exception& e)
	{
		std::cerr <<  e.what() <<std::endl;
	}


	sebas.signAForm(a32);
	for (size_t i = 0; i < 30; i++)	
		sebas.promote();
	sebas.signAForm(a32);
	return (0);
};