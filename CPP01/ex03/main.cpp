/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:12:10 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/30 16:46:12 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon sword = Weapon("Enorme claymore");
	HumanA Adnen("Adnen", sword);
	HumanB Adam("Adam");
	std::cout << Adnen._name << std::endl;
	std::cout << Adnen._weapon_A.getType() << std::endl;
/*	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}*/
	std::cout << "Salut" << std::endl;
	return 0;
}