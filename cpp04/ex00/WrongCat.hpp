/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:14:53 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 12:43:03 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
            WrongCat();
            ~WrongCat();
            WrongCat(const WrongCat &to_copy);
	        WrongCat &operator=(const WrongCat &to_copy);

            void makeSound() const;

    private:
};


#endif