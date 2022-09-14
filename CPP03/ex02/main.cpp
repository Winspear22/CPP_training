/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 17:50:49 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << "\033[1;33m=======================================================\033[0m" << std::endl;
	std::cout << "\033[1;31mCREATION OF FRAGTRAPS NARUTO, NARUTO'S CLONE AND SASUKE\033[0m" << std::endl;
	std::cout << "\033[1;33m=======================================================\033[0m" << std::endl;
	std::cout << "=========== ORIGINAL CONSTRUCTOR ===========" << std::endl;
	FragTrap original_fragtrap("Naruto");
	std::cout << "=========== COPY CONSTRUCTOR ===========" << std::endl;
	FragTrap copy_fragtrap(original_fragtrap);
	std::cout << "=========== EQUAL CONSTRUCTOR ===========" << std::endl;
	FragTrap copy_two_ct("Sasuke");
	
	copy_two_ct = original_fragtrap;
	copy_two_ct.setname("Sasuke");
	copy_fragtrap.setname("Naruto's clone");
	std::cout << std::endl;
	characters_data( original_fragtrap );
	characters_data( copy_fragtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;
	original_fragtrap.attack("Orochimaru");
	copy_fragtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	
	std::cout << std::endl;
	characters_data( original_fragtrap );
	characters_data( copy_fragtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_fragtrap.takeDamage(1);
	copy_fragtrap.takeDamage(101);
	copy_two_ct.takeDamage(1);
	
	std::cout << std::endl;
	characters_data( original_fragtrap );
	characters_data( copy_fragtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_fragtrap.beRepaired(1);
	copy_fragtrap.beRepaired(1);
	copy_two_ct.beRepaired(1);
	
	std::cout << std::endl;
	original_fragtrap.highFivesGuys();
	copy_fragtrap.highFivesGuys();
	copy_two_ct.highFivesGuys();
	std::cout << std::endl;

	std::cout << "\033[1;33mSetting Naruto's energy points to 0\033[0m." << std::endl;
	original_fragtrap.setmana(0);
	std::cout << std::endl;
	characters_data( original_fragtrap );
	characters_data( copy_fragtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_fragtrap.attack("Orochimaru");
	copy_fragtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	std::cout << "\033[1;33m==========================================================\033[0m" << std::endl;
	std::cout << "\033[1;31mDESTRUCTION OF FRAGTRAPS NARUTO, NARUTO'S CLONE AND SASUKE\033[0m" << std::endl;
	std::cout << "\033[1;33m==========================================================\033[0m" << std::endl;
	return (0);
}