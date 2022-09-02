/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 02:46:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap Sakura("Sakura");
	
	return (0);
}