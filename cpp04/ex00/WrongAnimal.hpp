/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:15 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 13:00:04 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>
#include <string.h>

class WrongAnimal
{
    public:
            WrongAnimal();
            virtual ~WrongAnimal();
            WrongAnimal(const WrongAnimal &to_copy);

            WrongAnimal &operator=(const WrongAnimal &to_copy);
            
            std::string getType() const;
            void set_type(std::string new_type);
            virtual void makeSound() const;

    protected:
            std::string type;
    
};





#endif