/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:47:19 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:41:27 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Buname("iñigo ")
{
    Bugrade = 69;
    std::cout << "Bureaucrat contructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): Buname(name)
{
    if(grade > 150)
            throw Bureaucrat::GradeTooLowException();
    if(grade < 1)
            throw Bureaucrat::GradeTooHighException(); 
    Bugrade = grade;
    
}

void 			Bureaucrat::signAForm(AForm &AForm) const
{
	try {
		AForm.beSigned(*this);
		std::cout << this->getname() << " signed " << AForm.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << this->getname() << " can't sign AForm " << AForm.getName(); 
		std::cout << " because it's beyond it's jurisdiction (rank difference = " << this->getgrade() - AForm.getSigned() << ")" << std::endl;
	}
}

void            Bureaucrat::executeAform(AForm &form) const
{
    try
    {
        form.executed(*this);
        std::cout << this->getname() << " executed" << form.getName();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}


Bureaucrat::Bureaucrat(class Bureaucrat &model): Buname(model.Buname)
{
    Bugrade = model.Bugrade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &model)
{
    Bugrade = model.Bugrade;
    return (*this);
}



std::string Bureaucrat::getname() const
{
    return(Buname);
}

int Bureaucrat::getgrade() const
{
    return(Bugrade);
}




void Bureaucrat::promote()
{
    if(Bugrade - 1 < 1)
        throw Bureaucrat::GradeTooHighException(); 
    Bugrade--;
}
void Bureaucrat::demote()
{
    if(Bugrade + 1 > 150)
        throw Bureaucrat::GradeTooLowException(); 
    Bugrade++;
}


std::ostream &operator<<(std::ostream &stream, const Bureaucrat &model)
{
    std::cout << "Bureaucrat " << model.getname() << "Grade " << model.getgrade() << std::endl;
    return (stream);
}



Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Bureaucrat garde to LOW. Destruction");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Bureaucrat garde to HIGH. Destruction");
}