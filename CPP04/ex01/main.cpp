/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 10:28:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal*	animals[6];
    int i;
	int j;

	i = -1;
	j = 1;
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE OBJECTS DOGS AND CATS INHERITED FROM ANIMAL\033[0m" << std::endl;
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;
	while (++i < 6)
	{
		if (i < 3)
		{
			animals[i] = new Cat();
			std::cout << "I am \033[1;36m " << animals[i]->getType() << "\033[1;38m n° " << j <<  "\033[0m" << std::endl;
			j++;
		}
		else
		{
			animals[i] = new Dog();
			std::cout << "I am\033[1;36m " << animals[i]->getType() << "\033[1;38m n° " << j <<  "\033[0m" << std::endl;
			j++;

		}
	}
	i = -1;
	std::cout << "\033[1;31m==========================\033[0m" << std::endl;
	std::cout << "\033[1;36mGIVING DOGS AND CATS IDEAS \033[0m" << std::endl;
	std::cout << "\033[1;31m==========================\033[0m" << std::endl;
    while (++i < 6)
    {
		animals[i]->getBrain()->setIdeas("\033[1;31mI want to eat.\033[0m", 0);
		animals[i]->getBrain()->setIdeas("\033[1;32mI want to drink.\033[0m", 1);
		animals[i]->getBrain()->setIdeas("\033[1;33mI want to sleep.\033[0m", 2);
    }
	i = -1;
	j = 1;
	Dog Dog1;
	Cat Cat1;
	Dog Dog2;
	Cat Cat2;

	Dog1.getBrain()->setIdeas("\033[1;37mThis is a deep copy.\033[0m", 0);
	Dog1.getBrain()->setIdeas("\033[1;37mThis is another proof of deep copy.\033[0m", 1);
	Cat1.getBrain()->setIdeas("\033[1;37mThis is a deep copy.\033[0m", 0);
	Cat1.getBrain()->setIdeas("\033[1;37mThis is anoher proof of deep copy.\033[0m", 1);
	
	Dog2 = Dog1;
	Cat2 = Cat1;
    std::cout << "adress of dog1 is : " << Dog1.getBrain() << std::endl;
    std::cout << "adress of dog2 is : " << Dog2.getBrain() << std::endl;
    std::cout << "adress of cat1 is : " << Cat1.getBrain() << std::endl;
    std::cout << "adress of cat2 is : " << Cat2.getBrain() << std::endl;
	
	std::cout << "Dog1 idea 0 = " << Dog1.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Dog2 idea 0 = " << Dog2.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Dog1 idea 1 = " << Dog1.getBrain()->getIdeas(1) << std::endl;
	std::cout << "Dog2 idea 1 = " << Dog2.getBrain()->getIdeas(1) << std::endl;
	std::cout << "Cat1 idea 0 = " << Cat1.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Cat2 idea 0 = " << Cat2.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Cat1 idea 1 = " << Cat1.getBrain()->getIdeas(1) << std::endl;
	std::cout << "Cat2 idea 1 = " << Cat2.getBrain()->getIdeas(1) << std::endl;
	/*		DIFFERENCE ENTRE DEEP ET SHALLOW COPY */
	//	Animal* minou;
	//	minou = animals[0];
	//Animal* medor  = animals[3];
	while (++i < 6)
	{
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(0) << std::endl;
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(1) << std::endl;
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(2) << std::endl;
		/*		DIFFERENCE ENTRE DEEP ET SHALLOW COPY */
//		delete animals[i];
		j++;
    }
	/*		DIFFERENCE ENTRE DEEP ET SHALLOW COPY */
//	std::cout << minou->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << minou->getBrain()->getIdeas(0) << std::endl;
	//std::cout << medor->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << medor->getBrain()->getIdeas(0) << std::endl;
	i = -1;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mDESTROYING CAT AND DOGS, THEIR BRAINS, THEN THE ANIMAL \033[0m" << std::endl;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	while (++i < 6)
		delete animals[i];
	return (0);
}