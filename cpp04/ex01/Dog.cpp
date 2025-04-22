/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:48 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 12:31:31 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
    std::cout << "Dog copy constructor called animal type asigned to " << type << std::endl;
}

Dog &Dog::operator=(const Dog &to_copy)
{
    Animal::operator=(to_copy);
    std::cout << "Dog operator= called animal type asigned to " << type << std::endl;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "GUAAUUU" << std::endl;
}