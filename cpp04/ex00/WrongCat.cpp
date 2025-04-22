/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:48 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 12:43:11 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    type = "WrongCat";
    
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(to_copy)
{
    std::cout << "WrongCat copy constructor called animal type asigned to " << type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &to_copy)
{
    WrongAnimal::operator=(to_copy);
    std::cout << "WrongCat operator= called animal type asigned to " << type << std::endl;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "kakkkaaa" << std::endl;
}