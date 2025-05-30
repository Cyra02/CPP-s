/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:15 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 14:30:05 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string.h>

class Animal
{
    public:
            Animal();
            virtual ~Animal();
            Animal(const Animal &to_copy);

            Animal &operator=(const Animal &to_copy);
            
            std::string getType() const;
            virtual void makeSound() const;

    protected:
            std::string type;
    
};





#endif