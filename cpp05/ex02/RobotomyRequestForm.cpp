/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:54:16 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:04:02 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm" , 72, 45)
{
    target = "robot";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm" , 72, 45)
{
    target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &model): AForm("RobotomyRequestForm" , 72, 45)
{
    target = model.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

std::string RobotomyRequestForm::getTarget() const
{
    return(target);
}

void RobotomyRequestForm::beExecuted() const
{
    std::cout << "drilingg buzz buzz" << std::endl;

    srand(time(NULL));

    int num = rand();

    if(num % 2)
        std::cout << target << " has been robotomiced" << std::endl;
    else
        std::cout << target << " the robotomy failed" << std::endl;
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &model)
{
    target = model.target;
    return *this;
}