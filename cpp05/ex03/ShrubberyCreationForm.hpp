/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:22:26 by ciestrad          #+#    #+#             */
/*   Updated: 2025/06/03 10:15:25 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <unistd.h>
#include <stdlib.h>
#include <fstream> 
#include <time.h>

class ShrubberyCreationForm : public AForm
{
	public:
			ShrubberyCreationForm();
			~ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm &Form);
	
			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &model);

			std::string getTarget() const;

			void beExecuted() const;
	private:
			std::string target;
};