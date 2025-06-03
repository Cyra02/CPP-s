/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:53:15 by cyra              #+#    #+#             */
/*   Updated: 2025/06/03 10:07:00 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <unistd.h>
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public AForm
{
	public:
			RobotomyRequestForm();
			~RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &Form);
	
			RobotomyRequestForm &operator=(const RobotomyRequestForm &model);

			std::string getTarget() const;

			void beExecuted() const;
	private:
			std::string target;
};

