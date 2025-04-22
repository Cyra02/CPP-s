/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:05 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 14:51:18 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	//const Aanimal* meta = new Aanimal();
	
    const Aanimal		*animals[100];

	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (size_t i = 0; i < 100; i++)
		std::cout << animals[i]->getType() << " " << std::endl;

	for (size_t i = 0; i < 100; i++)
		animals[i]->makeSound();

	for (size_t i = 0; i < 100; i++)
		delete animals[i];

	return 0;
}