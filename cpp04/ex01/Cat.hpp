/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:53 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 13:48:29 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
            Cat();
            virtual ~Cat();
            Cat(const Cat &to_copy);
	        Cat &operator=(const Cat &to_copy);

            void makeSound() const;

    private:
};


#endif