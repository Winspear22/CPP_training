/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 19:33:26 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal  *animals[10];
    Brain    *brain;

    for (int i = 0; i < 10; i++)
    {
        if (i < 10 / 2)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
        std::cout << "\033[1;33m" << animals[i]->getType() << "\033[0m" << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        brain = animals[i]->getBrain();
		brain->setIdeas("I will eat human", 0);
        brain->setIdeas("I think I'm kindding", 1);
        brain->setIdeas("I'm not really sure", 2);
    }
    for (int i = 0; i < 10; i++)
    {
        brain = animals[i]->getBrain();
        std::cout << brain->getIdeas(0) << std::endl;
    }
    for (int i = 0; i < 10; i++)
        delete animals[i];
	return (0);
}