/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/06/02 11:18:00 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
    {
        Form formu("formu 1", 5, 150);
        Bureaucrat buro("buro 1", 1);

        std::cout << buro << std::endl;
        std::cout << formu << std::endl;
        //buro.incrementGrade();
        //std::cout << buro << std::endl;

        //formu.beSigned(buro);
        buro.signForm(formu);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "" << std::endl;
     try
    {
        Form formu("formu 2", 1, 150);
        Bureaucrat buro("buro 2", 5);

        std::cout << buro << std::endl;
        std::cout << formu << std::endl;
        //buro.incrementGrade();
        //std::cout << buro << std::endl;

        //formu.beSigned(buro);
        buro.signForm(formu);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
};