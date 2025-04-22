/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:53 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 14:32:56 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog: public Aanimal
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