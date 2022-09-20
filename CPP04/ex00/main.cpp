/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 09:42:57 by adaloui          ###   ########.fr       */
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
	std::cout << "-------------------" << std::endl;
	const Dog* Medor = new Dog();
	const Cat* Minou = new Cat();

	std::cout << std::endl;
	std::cout << "\e[1;31mCreation of the fake animals : \e[0m" << std::endl;
	std::cout << std::endl;
	const WrongAnimal* Fake_Animal = new WrongAnimal();
	const WrongAnimal* Fake_Kitty = new WrongCat(); // N'est pas en virtual, donc il ne fait pas le bruit du cat.
	const WrongCat* Fake_Cat = new WrongCat();

	std::cout << "\e[1;31mAnimal's type : \e[0m" << std::endl;
	
	std::cout << "Variable's type -> Virtual Animal/Animal = " << meta->getType() << " " << std::endl;
    std::cout << "Variable's type -> Virtual Animal/Dog = " << j->getType() << " " << std::endl;
    std::cout << "Variable's type -> Virtual Animal/Cat = " <<i->getType() << " " << std::endl;
    std::cout << "Variable's type -> Dog = " << Medor->getType() << " " << std::endl;
	std::cout << "Variable's type -> Cat = " << Minou->getType() << " " << std::endl;
	
	std::cout << "Variable's type -> Non-Virtual WrongAnimal/WrongAnimal = " << Fake_Animal->getType() << " " << std::endl;
	std::cout << "Variable's type -> Non-Virtual WrongAnimal/WrongCat = " << Fake_Kitty->getType() << " " << std::endl;
	std::cout << "Variable's type -> Non-Virtual WrongCat/WrongCat = " << Fake_Cat->getType() << " " << std::endl;

	std::cout << "\e[1;31mAnimal's sounds : \e[0m" << std::endl;
	std::cout << "Variable's type -> Virtual Animal/Animal = " << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "Variable's type -> Virtual Animal/Dog = " << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "Variable's type -> Virtual Animal/Cat = " <<i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "Variable's type -> Dog = " << Medor->getType() << " " << std::endl;
	Medor->makeSound();
	std::cout << "Variable's type -> Cat = " << Minou->getType() << " " << std::endl;
	Minou->makeSound();
	std::cout << "Variable's type -> Non-Virtual WrongAnimal/WrongAnimal = " << Fake_Animal->getType() << " " << std::endl;
	Fake_Animal->makeSound();
	std::cout << "Variable's type -> Non-Virtual WrongAnimal/WrongCat = " << Fake_Kitty->getType() << " " << std::endl;
	Fake_Kitty->makeSound();
	std::cout << "Variable's type -> Non-Virtual WrongCat/WrongCat = " << Fake_Cat->getType() << " " << std::endl;
	Fake_Cat->makeSound();

	std::cout << std::endl;
	std::cout << "\e[1;31mDeleting all the Animals : \e[0m" << std::endl;
    std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "-------------------" << std::endl;
	delete Medor;
	delete Minou;
	std::cout << "-------------------" << std::endl;
	delete Fake_Cat;
	delete Fake_Kitty;
	delete Fake_Animal;
	return (0);
}

/*int main()
{
    const Animal *meta = new Animal();
    const WrongAnimal *meta1 = new WrongAnimal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *k = new WrongCat();
    const WrongCat *l = new WrongCat();
    
    std::cout <<std::endl;
    
    std::cout << meta->getType() << " >> This is an animal" << std::endl;
    std::cout << meta1->getType() << " >> This is a WrongAnimal" << std::endl;
    std::cout << j->getType() << " >> This is a Dog" << std::endl;
    std::cout << i->getType() << " >> This is a Cat" << std::endl;
    std::cout << k->getType() << " >> This is a WrongCat" << std::endl;
    std::cout << l->getType() << " >> This is a WrongCat" << std::endl;

    std::cout << std::endl;
    
    std::cout << "Animal sound (must be a generic sound):" << std::endl;
    meta->makeSound();
    std::cout << "WrongAnimal sound (must be a generic sound):" << std::endl;
    meta1->makeSound();
    std::cout << "Dog sound (must be a dog sound):" << std::endl;
    j->makeSound();
    std::cout << "Cat sound (must be a cat sound): " << std::endl;
    i->makeSound();
    std::cout << "WrongCat sound (must be a generic sound because there is no virtual methode):" << std::endl;
    k->makeSound();
    std::cout << "WrongCat sound (must not be a sound cat):" << std::endl;
    l->makeSound();

    std::cout << std::endl;
    
    delete meta;
    delete meta1;
    delete j;
    delete i;
    delete k;
    delete l;
    
    return 0;
}*/
