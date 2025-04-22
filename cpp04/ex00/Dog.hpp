/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:53 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 12:30:30 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
            Dog();
            virtual ~Dog();
            Dog(const Dog &to_copy);
	        Dog &operator=(const Dog &to_copy);
            
            void makeSound() const;

    private:
};


#endif