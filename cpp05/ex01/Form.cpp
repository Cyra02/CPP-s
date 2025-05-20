/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:14:38 by ciestrad          #+#    #+#             */
/*   Updated: 2025/05/20 11:51:12 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(): name("Form") , sign(150), execute(1)
{
	
}

Form::~Form()
{
	
}
Form::Form(std::string _name, int _sign, int _execute): name(_name), sign(_sign), execute(_execute)
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

Form::Form(const Form &model): name(model.name), checksign(false), sign(model.sign), execute(model.execute)
{
	
}

Form &Form::operator=(const Form &model)
{
	checksign = model.checksign;
	return(*this);
}




bool	Form::checkSigned() const
{
	return (checksign);
}

std::string	Form::getName() const
{
	return (name);
}

int	Form::getSigned() const
{
	return (sign);
}

int	Form::getExecute() const
{
	return (execute);
}

std::ostream &operator<<(std::ostream &stream, const Form &model)
{
	if(model.checkSigned())
		stream << 
}