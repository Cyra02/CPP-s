/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyra <cyra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:44:05 by cyra              #+#    #+#             */
/*   Updated: 2025/04/22 12:51:24 by cyra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    /* const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound(); */


    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    delete meta;
    delete i;
    return 0;
}