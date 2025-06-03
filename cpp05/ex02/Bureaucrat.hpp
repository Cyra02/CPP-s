/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:47:20 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:19:56 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string.h>

class AForm;

class Bureaucrat
{
    public:
            Bureaucrat();
            ~Bureaucrat();
            Bureaucrat(std::string name, int grade);
            Bureaucrat(class Bureaucrat &model);
            Bureaucrat	&operator=(const Bureaucrat &model);

            std::string     getname() const;
            int             getgrade() const;

            void            demote();
            void            promote();

			void 			signAForm(AForm &AForm) const;
            void            executeAform(AForm &Aform) const;

            class GradeTooHighException: public std::exception
            {
                public:
                        GradeTooHighException();
                        const char* what() const throw();
                
            };

            class GradeTooLowException: public std::exception
            {
                public:
                        GradeTooLowException();
                        const char* what() const throw();
                
            };

    private:
            const std::string   Buname;
            int                 Bugrade;
    
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &model);

#endif