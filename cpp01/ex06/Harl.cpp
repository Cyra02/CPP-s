/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:50:22 by ciestrad          #+#    #+#             */
/*   Updated: 2025/03/05 12:50:35 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {
	
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << "\n" << std::endl;
}


void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << "\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n" << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << "\n" << std::endl;
}

void Harl::harlFilter( std::string level )
{
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	const std::string opcion[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while(level != opcion[i] && i < 4)
	{
		i++;
	}
	switch (i)
	{
	case 0:
		debug();
		/*fallthrough*/
	case 1:
		info();
		/*fallthrough*/
	case 2:
		warning();
		/*fallthrough*/
	case 3:
		error();
		break;
	
	default:
		std::cout << "Level not found :c" << std::endl;
		break;
	}
	
}