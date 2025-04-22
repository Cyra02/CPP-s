/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:07 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 13:46:11 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Constructor de WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy)
{
    if (this == &to_copy)
		return ;
    type = to_copy.type;
    std::cout << "WrongAnimal contructor called Animal type set to " << to_copy.type << std::endl;
    
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &to_copy)
{
    if (this == &to_copy)
		return (*this);
    type = to_copy.type;
    std::cout << "WrongAnimal operato= called Animal type set to " << to_copy.type << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "aaaaaaaaaaaahhhhhhhhh" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::set_type(std::string new_type)
{
    type = new_type;
}