/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:08:06 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\e[1;31mCreation of the real animals : \e[0m" << std::endl;
	std::cout << std::endl;
   	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	const Dog* Medor = new Dog();
	const Cat* Minou = new Cat();

	std::cout << std::endl;
	std::cout << "\e[1;31mCreation of the fake animals : \e[0m" << std::endl;
	std::cout << std::endl;
	const WrongAnimal* Fake_Minou = new WrongCat();
	const WrongCat* Fake_Cat = new WrongCat();

	std::cout << "\e[1;31mAnimal's type : \e[0m" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

	std::cout << "\e[1;31mAnimal's sounds : \e[0m" << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	Medor->makeSound();
	Minou->makeSound();
	
	std::cout << std::endl;
	std::cout << "\e[1;31mFake animal's type : \e[0m" << std::endl;
	std::cout << std::endl;
	Fake_Minou->makeSound();
	Fake_Cat->makeSound();

	std::cout << std::endl;
	std::cout << "\e[1;31mDeleting all the Animals : \e[0m" << std::endl;
    std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete Medor;
	delete Minou;
	delete Fake_Cat;
	delete Fake_Minou;
	return (0);
}