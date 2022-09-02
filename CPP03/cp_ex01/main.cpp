/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 15:19:30 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void characters_data( ScavTrap & scavtrap )
{
	if (scavtrap.gethp() <= 0)
	{
		std::cout << "\033[1;31m[DEAD]\033[0m ScavTrap \033[1;32m" << scavtrap.getname() << "\033[0m has \033[1;31m"
		<< scavtrap.gethp() << " HP\033[0m, \033[1;34m" << scavtrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << scavtrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap \033[1;32m" << scavtrap.getname() << "\033[0m has \033[1;31m"
		<< scavtrap.gethp() << " HP\033[0m, \033[1;34m" << scavtrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << scavtrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
}

int main( void )
{
	ClapTrap Kakashi("Kakashi");
	std::cout << "=========== ORIGINAL CONSTRUCTOR ===========" << std::endl;
	ScavTrap original_scavtrap("Naruto");
	std::cout << "=========== COPY CONSTRUCTOR ===========" << std::endl;
	ScavTrap copy_scavtrap(original_scavtrap);
	std::cout << "=========== EQUAL CONSTRUCTOR ===========" << std::endl;
	ScavTrap copy_two_ct("Sasuke");
	
	copy_two_ct = original_scavtrap;
	copy_two_ct.setname("Sasuke");
	copy_scavtrap.setname("Naruto's clone");
	std::cout << std::endl;
	characters_data( original_scavtrap );
	characters_data( copy_scavtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;
	original_scavtrap.attack("Orochimaru");
	copy_scavtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	Kakashi.attack("Oorchimaru");
	
	std::cout << std::endl;
	characters_data( original_scavtrap );
	characters_data( copy_scavtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_scavtrap.takeDamage(1);
	copy_scavtrap.takeDamage(101);
	copy_two_ct.takeDamage(1);
	
	std::cout << std::endl;
	characters_data( original_scavtrap );
	characters_data( copy_scavtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_scavtrap.beRepaired(1);
	copy_scavtrap.beRepaired(1);
	copy_two_ct.beRepaired(1);
	
	std::cout << std::endl;
	original_scavtrap.guardGate();
	copy_scavtrap.guardGate();
	copy_two_ct.guardGate();
	std::cout << std::endl;

	std::cout << "\033[1;33mSetting Naruto's energy points to 0\033[0m." << std::endl;
	original_scavtrap.setmana(0);
	std::cout << std::endl;
	characters_data( original_scavtrap );
	characters_data( copy_scavtrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_scavtrap.attack("Orochimaru");
	copy_scavtrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	Kakashi.attack("Oorchimaru");
	return (0);
}