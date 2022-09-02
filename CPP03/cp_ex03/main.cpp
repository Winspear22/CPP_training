/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 16:20:20 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void characters_data( ClapTrap & FragTrap )
{
	if (FragTrap.gethp() <= 0)
	{
		std::cout << "\033[1;31m[DEAD]\033[0m FragTrap \033[1;32m" << FragTrap.getname() << "\033[0m has \033[1;31m"
		<< FragTrap.gethp() << " HP\033[0m, \033[1;34m" << FragTrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << FragTrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
	else
	{
		std::cout << "FragTrap \033[1;32m" << FragTrap.getname() << "\033[0m has \033[1;31m"
		<< FragTrap.gethp() << " HP\033[0m, \033[1;34m" << FragTrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << FragTrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
}

int main( void )
{
	DiamondTrap Tsunade("Tsunade");
	std::cout << "=========== ORIGINAL CONSTRUCTOR ===========" << std::endl;
	DiamondTrap original_diamondtrap("Naruto");
	std::cout << "=========== COPY CONSTRUCTOR ===========" << std::endl;
	DiamondTrap copy_diamondtrap(original_diamondtrap);
	std::cout << "=========== EQUAL CONSTRUCTOR ===========" << std::endl;
	DiamondTrap copy_two_ct("Sasuke");
	
	copy_two_ct = original_diamondtrap;
	copy_two_ct.setname("Sasuke");
	copy_diamondtrap.setname("Naruto's clone");
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	characters_data( copy_diamondtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;
	original_diamondtrap.attack("Orochimaru");
	copy_diamondtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	characters_data( copy_diamondtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_diamondtrap.takeDamage(1);
	copy_diamondtrap.takeDamage(101);
	copy_two_ct.takeDamage(1);
	
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	characters_data( copy_diamondtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_diamondtrap.beRepaired(1);
	copy_diamondtrap.beRepaired(1);
	copy_two_ct.beRepaired(1);
	
	std::cout << std::endl;
	original_diamondtrap.highFivesGuys();
	std::cout << std::endl;

	std::cout << "\033[1;33mSetting Naruto's energy points to 0\033[0m." << std::endl;
	original_diamondtrap.setmana(0);
	std::cout << std::endl;
	characters_data( original_diamondtrap );
	characters_data( copy_diamondtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_diamondtrap.attack("Orochimaru");
	copy_diamondtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	return (0);
}