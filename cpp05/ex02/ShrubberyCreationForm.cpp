/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:25:54 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 12:53:40 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm" , 145, 137)
{
    target = "tree";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm" , 145, 137)
{
    target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &model): AForm("ShrubberyCreationForm" , 145, 137)
{
    target = model.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

std::string ShrubberyCreationForm::getTarget() const
{
    return(target);
}

void ShrubberyCreationForm::beExecuted() const
{
    std::ofstream   file((getTarget() + "_shuberry").c_str());
    if (!file.is_open())
    {
        std::cout << "File cant be created" << std::endl;
        return ;
    }
    file << "⚲ϙϙ𐊭Ϙ⚲ϙ" << std::endl;
            
    file.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &model)
{
    target = model.target;
    return *this;
}