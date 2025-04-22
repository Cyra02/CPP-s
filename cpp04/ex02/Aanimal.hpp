/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:15 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 14:29:38 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP


#include <iostream>
#include <string.h>

class Aanimal
{
    public:
            Aanimal();
            virtual ~Aanimal();
            Aanimal(const Aanimal &to_copy);

            Aanimal &operator=(const Aanimal &to_copy);
            
            std::string getType() const;
            virtual void makeSound() const = 0;

    protected:
            std::string type;
    
};





#endif