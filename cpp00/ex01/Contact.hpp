/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:00:12 by ciestrad          #+#    #+#             */
/*   Updated: 2025/02/11 12:00:24 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contacts
{
	public:
			void	setFirstName(std::string str);
			void	setLastName(std::string str);
			void	setNickname(std::string str);
			void	setPhoneName(std::string str);
			void	setSecret(std::string str);
	

	private:
			std::string		first_name;
			std::string		last_name;
			std::string		nickname;
			std::string		phone_number;
			std::string		darkest_secret;
			
};

#endif