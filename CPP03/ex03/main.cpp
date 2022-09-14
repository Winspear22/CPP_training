/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 17:05:25 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void characters_data( ClapTrap & DiamondTrap )
{
	if (DiamondTrap.gethp() <= 0)
	{
		std::cout << "\033[1;31m[DEAD]\033[0m DiamondTrap \033[1;32m" << DiamondTrap.getname() << "\033[0m has \033[1;31m"
		<< DiamondTrap.gethp() << " HP\033[0m, \033[1;34m" << DiamondTrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << DiamondTrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
	else
	{
		std::cout << "DiamondTrap \033[1;32m" << DiamondTrap.getname() << "\033[0m has \033[1;31m"
		<< DiamondTrap.gethp() << " HP\033[0m, \033[1;34m" << DiamondTrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << DiamondTrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
}

int main( void )
{
	std::cout << "\033[1;33m==============================\033[0m" << std::endl;
	std::cout << "\033[1;31mCREATION OF DIAMONDTRAP NARUTO\033[0m" << std::endl;
	std::cout << "\033[1;33m==============================\033[0m" << std::endl;
	DiamondTrap original_diamondtrap("Naruto");
	std::cout << std::endl;
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	std::cout << std::endl;
	original_diamondtrap.attack("Orochimaru");
	
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	std::cout << std::endl;

	original_diamondtrap.takeDamage(1);
	
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	std::cout << std::endl;

	original_diamondtrap.beRepaired(1);
	
	std::cout << std::endl;
	original_diamondtrap.highFivesGuys();
	original_diamondtrap.whoAmI();
	original_diamondtrap.guardGate();
	std::cout << std::endl;

	std::cout << "\033[1;33mSetting Naruto's energy points to 0\033[0m." << std::endl;
	original_diamondtrap.setmana(0);
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	std::cout << std::endl;

	original_diamondtrap.attack("Orochimaru");
	std::cout << "\033[1;33m=================================\033[0m" << std::endl;
	std::cout << "\033[1;31mDESTRUCTION OF DIAMONDTRAP NARUTO\033[0m" << std::endl;
	std::cout << "\033[1;33m=================================\033[0m" << std::endl;
	
	return (0);
}