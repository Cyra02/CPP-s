/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:26:10 by ciestrad          #+#    #+#             */
/*   Updated: 2025/05/20 11:46:34 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Form
{
	public:
			Form();
			~Form();
			Form(const Form &model);
			Form(std::string name, int sign_grade, int execute_grade);

			Form &operator=(const Form &model);

			bool		checkSigned() const;
			std::string	getName() const;
			int			getSigned() const;
			int			getExecute() const;

			void		beSigned(class Bureaucrat &model);

			class GradeTooLowException: public std::exception
			{
				public:
						GradeTooLowException();
						const char* what() const throw();
				
			};

			class GradeTooHighException: public std::exception
			{
				public:
						GradeTooHighException();
						const char* what() const throw();
				
			};

	private:
			const std::string	name;
			const int			sign;
			const int			execute;
			bool				checksign;
			

			
	
};
std::ostream	&operator<<(std::ostream &stream, const Form &model);

#endif