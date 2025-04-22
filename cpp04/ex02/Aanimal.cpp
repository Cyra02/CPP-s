/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:07 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 14:29:27 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"


Aanimal::Aanimal()
{
    type = "Aanimal";
    std::cout << "Constructor de Aanimal called" << std::endl;
}

Aanimal::~Aanimal()
{
    std::cout << "Aanimal Destructor Called" <<  std::endl;
}

Aanimal::Aanimal(const Aanimal &to_copy)
{
    if (this == &to_copy)
		return ;
    type = to_copy.type;
    std::cout << "Aanimal contructor called Animal type set to " << to_copy.type << std::endl;
    
}

Aanimal &Aanimal::operator=(const Aanimal &to_copy)
{
    if (this == &to_copy)
		return (*this);
    type = to_copy.type;
    std::cout << "Aanimal operato= called Animal type set to " << to_copy.type << std::endl;
    return (*this);
}



std::string Aanimal::getType() const
{
    return(type);
}