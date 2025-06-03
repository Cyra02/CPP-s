/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:07:16 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:12:04 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm" , 25, 5)
{
    target = "sorry";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm" , 25, 5)
{
    target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &model): AForm("PresidentialPardonForm" , 25, 5)
{
    target = model.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

std::string PresidentialPardonForm::getTarget() const
{
    return(target);
}

void PresidentialPardonForm::beExecuted() const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &model)
{
    target = model.target;
    return *this;
}