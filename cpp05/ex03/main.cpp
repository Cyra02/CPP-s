/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:58:06 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 13:37:34 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
/* #include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp" */
#include "Intern.hpp"


int main()
{

	AForm	*newForm;
	Intern	intern;
	Bureaucrat pedro("pedro", 1);

	newForm = intern.makeForm("Robotomy test", "Bender");
	delete newForm;
	newForm = intern.makeForm("Shruberry test", "road");
	pedro.signAForm(*newForm);
	pedro.executeAform(*newForm);
};