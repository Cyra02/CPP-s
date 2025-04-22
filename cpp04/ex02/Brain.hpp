/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:07:57 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 13:35:43 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>
#include <sstream>

class Brain
{
    private:
            std::string ideas[100];
    public:
            Brain();
            ~Brain();
            Brain(const Brain &to_copy);
            Brain &operator=(const Brain &to_copy);
            
};



#endif