/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/08/31 15:36:12 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void characters_data( ClapTrap & claptrap )
{
	if (claptrap.gethp() <= 0)
	{
		std::cout << "\033[1;31m[DEAD]\033[0m ClapTrap \033[1;32m" << claptrap.getname() << "\033[0m has \033[1;31m"
		<< claptrap.gethp() << " HP\033[0m, \033[1;34m" << claptrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << claptrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap \033[1;32m" << claptrap.getname() << "\033[0m has \033[1;31m"
		<< claptrap.gethp() << " HP\033[0m, \033[1;34m" << claptrap.getmana() << 
		" energy points\033[0m and \033[1;35m" << claptrap.getdmg()
		<< " attack damage\033[0m." << std::endl;
	}
}

int main( void )
{
	ClapTrap original_claptrap("Naruto");
	ClapTrap copy_claptrap(original_claptrap);
	ClapTrap copy_two_ct("Sasuke");
	
	copy_two_ct = original_claptrap;
	copy_two_ct.setname("Sasuke");
	copy_claptrap.setname("Naruto's clone");
	std::cout << std::endl;
	characters_data( original_claptrap );
	characters_data( copy_claptrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;
	original_claptrap.attack("Orochimaru");
	copy_claptrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	
	std::cout << std::endl;
	characters_data( original_claptrap );
	characters_data( copy_claptrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_claptrap.takeDamage(1);
	copy_claptrap.takeDamage(10);
	copy_two_ct.takeDamage(1);
	
	std::cout << std::endl;
	characters_data( original_claptrap );
	characters_data( copy_claptrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_claptrap.beRepaired(1);
	copy_claptrap.beRepaired(1);
	copy_two_ct.beRepaired(1);

	std::cout << "\033[1;33mSetting Naruto's energy points to 0\033[0m." << std::endl;
	original_claptrap.setmana(0);
	std::cout << std::endl;
	characters_data( original_claptrap );
	characters_data( copy_claptrap );
	characters_data( copy_two_ct );
	std::cout << std::endl;

	original_claptrap.attack("Orochimaru");
	copy_claptrap.attack("Orochimaru");
	copy_two_ct.attack("Orochimaru");
	return (0);
}