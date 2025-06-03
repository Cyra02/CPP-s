/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:07:27 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:08:10 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <unistd.h>
#include <stdlib.h>
#include <time.h>

class PresidentialPardonForm : public AForm
{
	public:
			PresidentialPardonForm();
			~PresidentialPardonForm();
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(const PresidentialPardonForm &Form);
	
			PresidentialPardonForm &operator=(const PresidentialPardonForm &model);

			std::string getTarget() const;

			void beExecuted() const;
	private:
			std::string target;
};

