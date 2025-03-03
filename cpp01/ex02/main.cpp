/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:15:46 by cyra              #+#    #+#             */
/*   Updated: 2025/02/25 11:25:42 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brainz = "HI THIS IS BRAIN";
    std::string *stringPTR = &brainz;
    std::string &stringREF = brainz;

    std::cout << &brainz << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << brainz << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}