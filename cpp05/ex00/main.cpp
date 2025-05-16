/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/05/16 12:58:08 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	pedro;
	try
	{
		pedro = Bureaucrat("Pedro", 12);
		std::cout << pedro << std::endl;
		Bureaucrat juan("Juan", 158);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << pedro << std::endl;
	return (0);
}