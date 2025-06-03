/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:42:31 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::string 			target("test");
	Bureaucrat				pedro("Pedro Sánchez", 1);
	Bureaucrat				sebas("Sebas", 10);
	ShrubberyCreationForm	a12(target);
	RobotomyRequestForm		a22(target);
	PresidentialPardonForm	a32(target);
	std::string				reason;

	std::cout << pedro << std::endl;
	std::cout << a32 << std::endl;

	sebas.signAForm(a12);
	sebas.signAForm(a22);
	sebas.signAForm(a32);
	pedro.executeAform(a12);
	pedro.executeAform(a22);
	pedro.executeAform(a32);

	return (0);
};