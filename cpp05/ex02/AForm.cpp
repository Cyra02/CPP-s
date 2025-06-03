/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:14:38 by ciestrad          #+#    #+#             */
/*   Updated: 2025/05/26 12:24:58 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(): name("AForm") , sign(150), execute(1)
{
	
}

AForm::~AForm()
{
	
}
AForm::AForm(std::string _name, int _sign, int _execute): name(_name), sign(_sign), execute(_execute)
{
	if(_sign > 150)
		throw GradeTooHighException();
	if(_sign < 1)
		throw GradeTooLowException();
		if(_execute > 150)
		throw GradeTooHighException();
	if(_execute < 1)
		throw GradeTooLowException();
	checksign = false;
}

AForm::AForm(const AForm &model): name(model.name), checksign(false), sign(model.sign), execute(model.execute)
{
	
}

AForm &AForm::operator=(const AForm &model)
{
	checksign = model.checksign;
	return(*this);
}




bool	AForm::checkSigned() const
{
	return (checksign);
}

std::string	AForm::getName() const
{
	return (name);
}

int	AForm::getSigned() const
{
	return (sign);
}

int	AForm::getExecute() const
{
	return (execute);
}

std::ostream &operator<<(std::ostream &stream, const AForm &model)
{
	if(model.checkSigned())
		stream << "AForm: " << model.getName() << " is signed ";
	else	
		stream << "AForm: " << model.getName() << " is NOT signed ";

	stream << model.getSigned() << " grade is needed for be signed and " << model.getExecute() << " grade for been executed ";
	return(stream);
}

void		AForm::beSigned(const Bureaucrat &bureaucrat)
{
	std::cout << bureaucrat.getgrade() << this->sign << std::endl;
	if (bureaucrat.getgrade() > this->sign)
		throw AForm::GradeTooLowException();
	checksign = true;
	
}
void AForm::executed(const Bureaucrat &executed)
{
	if(!this->sign)
		throw FormNotSignedException();
	if(executed.getgrade() > this->getExecute())
		throw GradeTooLowException();
	this->beExecuted();
}

AForm::GradeTooLowException::GradeTooLowException()
{
	
}

AForm::GradeTooHighException::GradeTooHighException()
{
	
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("AForm garde to LOW. Destruction");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return("AForm garde to HIGH. Destruction");
}

AForm::FormNotSignedException::FormNotSignedException()
{
	
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return("Exception on form. Not Signed. Terminating");
}