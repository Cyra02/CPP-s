/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:48 by cyra              #+#    #+#             */
/*   Updated: 2025/04/20 14:49:43 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
    std::cout << "Cat copy constructor called animal type asigned to " << type << std::endl;
}

Cat &Cat::operator=(const Cat &to_copy)
{
    Animal::operator=(to_copy);
    std::cout << "Cat operator= called animal type asigned to " << type << std::endl;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "MIAUU" << std::endl;
}