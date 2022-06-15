/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:57:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 03:11:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("yo");
	ScavTrap yo("test");
	std::cout << "Amount of life of ScavTrap : " << test.getHp() << std::endl;
	std::cout << "\033[1;31mEnergy level of my ScavTrap : \033[m" << test.getEnergy() << std::endl;
	test.attack("michel");
	std::cout << "\033[1;31mEnergy level of my ScavTrap : \033[m" << test.getEnergy() << std::endl;
	test.guardGate();
	test.attack("test2");
	test.heal(35);
	std::cout << "Changing the energy level of my ScavTrap to 1" << std::endl;
	test.setEnergy(1);
	test.heal(600);
	test.heal(785);
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "Amount of life of ScavTrap : " << test.getHp() << std::endl;
	std::cout << "Amount of life of ScavTrap : " << yo.getHp() << std::endl;
	yo = test;
	std::cout << "Amount of life of ScavTrap : " << yo.getHp() << std::endl;
}