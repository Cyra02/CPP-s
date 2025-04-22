/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:07:46 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 13:44:51 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;

    for(size_t i = 0 ; i <= 100 ; i++)
    {
        std::ostringstream buffer;
        buffer << "Idea number " << i;
        ideas[i] = buffer.str();
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &to_copy)
{
    std::cout << "Brain copy constructor called" << std::endl;

    if (this == &to_copy)
		return ;
    
    for (size_t i = 0 ; i <= 100 ; i++)
        ideas[i] = to_copy.ideas[i];
}

Brain &Brain::operator=(const Brain &to_copy)
{
    std::cout << "Brain operator= constructor called" << std::endl;

    if (this == &to_copy)
		return (*this);

    for (size_t i = 0 ; i <= 100 ; i++)
        ideas[i] = to_copy.ideas[i];
    return (*this);
}
