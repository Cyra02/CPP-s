/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/05/26 12:26:12 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  sebas("sebas", 44);
    Bureaucrat  paco("paco", 70);
    Form        a32("a32", 60, 15);
    std::cout << sebas << std::endl;
    std::cout << paco << std::endl;
    std::cout << a32 << std::endl;
    try
    {
        Form    a34("a34", 75, 25);
        a32.beSigned(paco);
        a34.beSigned(paco);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    sebas.signForm(a32);
    return (0);
};