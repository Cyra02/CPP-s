/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:07 by cyra              #+#    #+#             */
/*   Updated: 2025/04/20 14:46:02 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    type = "Animal";
    std::cout << "Constructor de Animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" <<  std::endl;
}

Animal::Animal(const Animal &to_copy)
{
    type = to_copy.type;
    std::cout << "Animal contructor called Animal type set to " << to_copy.type << std::endl;
    
}

Animal &Animal::operator=(const Animal &to_copy)
{
    type = to_copy.type;
    std::cout << "Animal operato= called Animal type set to " << to_copy.type << std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "macarrones" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}

void Animal::set_type(std::string new_type)
{
    type = new_type;
}