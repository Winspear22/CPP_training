/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:46:35 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 20:20:50 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap Naruto("Naruto");
	ClapTrap Sasuke( Naruto );
	ScavTrap Sakura("Sakura");
	ScavTrap Kakashi( Sakura );
	
	Sasuke.setname("Sasuke");
	Kakashi.setname("Kakashi");
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sakura : \033[m" << Sakura.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Kakashi : \033[m" << Kakashi.getmana() << std::endl;
	Naruto.attack("Orochimaru");
	Sasuke.attack("Orochimaru");
	Sakura.attack("Kimimaro");
	Kakashi.attack("Kimimaro");
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sakura : \033[m" << Sakura.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Kakashi : \033[m" << Kakashi.getmana() << std::endl;
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sakura : " << Sakura.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Kakashi : " << Kakashi.gethp() << "\033[m" << std::endl;
	Naruto.takeDamage(9);
	Sasuke.takeDamage(9);
	Sakura.takeDamage(9);
	Kakashi.takeDamage(9);
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sakura : " << Sakura.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Kakashi : " << Kakashi.gethp() << "\033[m" << std::endl;
	Naruto.beRepaired(1);
	Sasuke.beRepaired(1);
	Sakura.beRepaired(1);
	Kakashi.beRepaired(1);
	Sakura.guardGate();
	Kakashi.guardGate();
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sakura : \033[m" << Sakura.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Kakashi : \033[m" << Kakashi.getmana() << std::endl;
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sakura : " << Sakura.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Kakashi : " << Kakashi.gethp() << "\033[m" << std::endl;
	Naruto.takeDamage(11);
	Sasuke.takeDamage(11);
	Sakura.takeDamage(11);
	Kakashi.takeDamage(11);
	return (0);
}

/*		TRY LACK OF ENERGY				*/

/*int main( void )
{
	int i;
    ClapTrap Naruto("Naruto");
    ClapTrap Sasuke( Naruto );
	
	i = 0;
	Sasuke.setname("Sasuke");
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	Naruto.attack("Orochimaru");
	Sasuke.attack("Orochimaru");
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level of Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	Naruto.takeDamage(9);
	Sasuke.takeDamage(9);
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	while (i < 10)
	{
		Naruto.beRepaired(1);
		Sasuke.beRepaired(1);
		i++;
	}
	std::cout << "\033[1;31mEnergy level of Naruto : \033[m" << Naruto.getmana() << std::endl;
	std::cout << "\033[1;31mEnergy level Sasuke : \033[m" << Sasuke.getmana() << std::endl;
	std::cout << "\033[0;34mHP of Naruto : " << Naruto.gethp() << "\033[m" << std::endl;
	std::cout << "\033[0;34mHP of Sasuke : " << Sasuke.gethp() << "\033[m" << std::endl;
	Naruto.takeDamage(9);
	Sasuke.takeDamage(9);
	return (0);
}*/