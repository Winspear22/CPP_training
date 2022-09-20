/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:52:03 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[6];
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
			std::cout << "I am \033[1;36m " << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m" << std::endl;
			j++;
		}
		else
		{
			animals[i] = new Dog();
			std::cout << "I am\033[1;36m " << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m" << std::endl;
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
	while (++i < 6)
	{
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(0) << std::endl;
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(1) << std::endl;
		std::cout << animals[i]->getType() << "\033[1;38m n° " << j << "\033[0m thinks : " << animals[i]->getBrain()->getIdeas(2) << std::endl;
		j++;
	}
	i = -1;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mDESTROYING CAT AND DOGS, THEIR BRAINS, THEN THE ANIMAL \033[0m" << std::endl;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	while (++i < 6)
		delete animals[i];
	std::cout << "\033[1;31m=========================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mDEMONSTRATING THE DEEP COPY BY CREATING 2 DOGS AND 2 CATS \033[0m" << std::endl;
	std::cout << "\033[1;31m=========================================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mSHOWING THE DIFFERENT ADDRESSES OF THE ANIMAL'S BRAINS \033[0m" << std::endl;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	std::cout << Dog1.getType() << "\033[1;37m n° 1\033[0m's brain address : \033[1;35m" << Dog1.getBrain() << "\033[0m" << std::endl;
	std::cout << Dog2.getType() << "\033[1;37m n° 2\033[0m's brain address : \033[1;35m" << Dog2.getBrain() << "\033[0m" << std::endl;
	std::cout << Cat1.getType() << "\033[1;37m n° 1\033[0m's brain address : \033[1;35m" << Cat1.getBrain() << "\033[0m" << std::endl;
	std::cout << Cat2.getType() << "\033[1;37m n° 2\033[0m's brain address : \033[1;35m" << Cat2.getBrain() << "\033[0m" << std::endl;

	std::cout << "\033[1;31m==================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mSHOWING THE DIFFERENT IDEAS IN THE ANIMAL'S BRAINS \033[0m" << std::endl;
	std::cout << "\033[1;31m==================================================\033[0m" << std::endl;

	std::cout << Dog1.getType() << "\033[1;37m n° 1\033[0m's idea \033[1;37mn°0\033[0m : " << Dog1.getBrain()->getIdeas(0) << std::endl;
	std::cout << Dog2.getType() << "\033[1;37m n° 2\033[0m's idea \033[1;37mn°0\033[0m : " << Dog2.getBrain()->getIdeas(0) << std::endl;
	std::cout << Dog1.getType() << "\033[1;37m n° 1\033[0m's idea \033[1;37mn°1\033[0m : " << Dog1.getBrain()->getIdeas(1) << std::endl;
	std::cout << Dog2.getType() << "\033[1;37m n° 2\033[0m's idea \033[1;37mn°1\033[0m : " << Dog2.getBrain()->getIdeas(1) << std::endl;
	std::cout << Cat1.getType() << "\033[1;37m n° 1\033[0m's idea \033[1;37mn°0\033[0m : " << Cat1.getBrain()->getIdeas(0) << std::endl;
	std::cout << Cat2.getType() << "\033[1;37m n° 2\033[0m's idea \033[1;37mn°0\033[0m : " << Cat2.getBrain()->getIdeas(0) << std::endl;
	std::cout << Cat1.getType() << "\033[1;37m n° 1\033[0m's idea \033[1;37mn°1\033[0m : " << Cat1.getBrain()->getIdeas(1) << std::endl;
	std::cout << Cat2.getType() << "\033[1;37m n° 2\033[0m's idea \033[1;37mn°1\033[0m : " << Cat2.getBrain()->getIdeas(1) << std::endl;

	return (0);
}