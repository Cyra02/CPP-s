/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:57:57 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 13:31:30 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}
Intern::Intern(const Intern &model)
{
    (void) model;
}

Intern &Intern::operator=(const Intern &model)
{
    (void)model;
    return(*this);
}

AForm *Intern::makeForm(std::string FormName, std::string FormTarget)
{
    std::string formlist[] = {"Shruberry test", "Robotomy test", "Perdon test"};

    int i = 0;

    AForm *form = NULL;

    for (int i = 0; formlist[i] != FormName && i < 4 ; i++)
        ;
    switch (i)
    {
        case 0:
                form = new ShrubberyCreationForm(FormTarget);
                std::cout << "Intern creates " << *form << std::endl;
                break;
                /* fallthrough */
        case 1:
                form = new RobotomyRequestForm(FormTarget);
                std::cout << "Intern creates " << *form << std::endl;
                break;
                /* fallthrough */
        case 2:
                form = new PresidentialPardonForm(FormTarget);
                std::cout << "Intern creates " << *form << std::endl;
                break;
                /* fallthrough */
        default:
                std::cout << "Form name not found " << std::endl;
    } 
    return(NULL);      
}