/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:57:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 02:23:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ft_append_string(std::string str)
{
	if (str.length() >= 10)
		str = str.substr(0, 9).append(".");
	return (str);
}

void	ft_print_tab(ClapTrap & genin, ClapTrap & genin_2, ClapTrap & jonin, ClapTrap & enemy)
{
	std::cout << std::setw(10) << ft_append_string("Information");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 1");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 2");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 3") << std::endl;
	std::cout << std::setw(10) << ft_append_string("Ninja");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(genin.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(genin_2.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(jonin.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(enemy.getName()) << std::endl;
	std::cout << std::setw(10) << ft_append_string("Jutsu");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Rasengan");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Hidden Lotus");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Desert Tumb");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Deadly dance") << std::endl;
	std::cout << std::setw(10) << ft_append_string("HP");
	std::cout << "|";
	std::cout << std::setw(10) << genin.getHp();
	std::cout << "|";
	std::cout << std::setw(10) << genin_2.getHp();
	std::cout << "|";
	std::cout << std::setw(10) << jonin.getHp();
	std::cout << "|";
	std::cout << std::setw(10) << enemy.getHp() << std::endl;
	std::cout << std::setw(10) << ft_append_string("Energy");
	std::cout << "|";
	std::cout << std::setw(10) << genin.getEnergy();
	std::cout << "|";
	std::cout << std::setw(10) << genin_2.getEnergy();
	std::cout << "|";
	std::cout << std::setw(10) << jonin.getEnergy();
	std::cout << "|";
	std::cout << std::setw(10) << enemy.getEnergy() << std::endl;
}

int main( void )
{
	ClapTrap genin("Naruto");
	ClapTrap genin_2("Rock Lee");
	ClapTrap jonin("Gaara");
	ClapTrap enemy("Kimimaro");
	std::string str;

	std::cout << std::setw(10) << ft_append_string("Information");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 1");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 2");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Ninja 3");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Enemy") << std::endl;
	std::cout << std::setw(10) << ft_append_string("Ninja");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(genin.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(genin_2.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(jonin.getName());
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string(enemy.getName()) << std::endl;
	std::cout << std::setw(10) << ft_append_string("Jutsu");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Rasengan");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Hidden Lotus");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Desert Tumb");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("Deadly dance") << std::endl;
	std::cout << std::setw(10) << ft_append_string("HP");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("10");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("15");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("20");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("25") << std::endl;
	std::cout << std::setw(10) << ft_append_string("Energy");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("5");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("6");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("7");
	std::cout << "|";
	std::cout << std::setw(10) << ft_append_string("8") << std::endl;
	
	genin.setDmg(3);
	genin.setHp(10);
	genin.setEnergy(5);
	genin_2.setDmg(5);
	genin_2.setHp(15);
	genin_2.setEnergy(6);
	jonin.setDmg(6);
	jonin.setHp(20);
	jonin.setEnergy(7);
	enemy.setDmg(7);
	enemy.setHp(25);
	enemy.setEnergy(8);
	std::cout << "You are in a mission to save Sasuke, in order to get to him" << std::endl;
	std::cout << "you have to beat Kimimaro, Orochimaru's right hand. You have three ninjas " << std::endl;
	std::cout << "to help you : Naruto, Rock Lee and Gaara. Write their name to attack Kimimaro " << std::endl;
	std::cout << "and defeat him. Be carefull, if one of your ninja dies, you lose the game." << std::endl;
	std::cout << "> ";
	while (getline(std::cin, str))
	{
		if (str == "Naruto")
		{
			genin.attack("Kimikaro");
			enemy.tank(4);
			enemy.attack("Naruto");
			genin.tank(4);
			ft_print_tab(genin, genin_2, jonin, enemy);
			if (genin.getHp() <= 0)
			{
				std::cout << "You lost, Naruto died." << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0)
			{
				std::cout << "You beat Kimimaro, you WON !!" << std::endl;
				return (0);
			}
			if (enemy.getEnergy() <= 0)
			{
				std::cout << "Kimimaro uses Cursed Mark and healed himself." << std::endl;
				enemy.heal(1);
				enemy.setEnergy(2);
			}
			std::cout << std::endl;
			std::cout << "> ";
		}
		else if (str == "Rock Lee")
		{
			genin_2.attack("Kimikaro");
			enemy.tank(4);
			enemy.attack("Rock Lee");
			genin_2.tank(4);
			ft_print_tab(genin, genin_2, jonin, enemy);
			if (genin_2.getHp() <= 0)
			{
				std::cout << "You lost, Rock Lee died." << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0)
			{
				std::cout << "You beat Kimimaro, you WON !!" << std::endl;
				return (0);
			}
			if (enemy.getEnergy() <= 0)
			{
				std::cout << "Kimimaro uses Cursed Mark and healed himself." << std::endl;
				enemy.heal(1);
				enemy.setEnergy(2);
			}
			std::cout << std::endl;
			std::cout << "> ";
		}
		else if (str == "Gaara")
		{
			jonin.attack("Kimikaro");
			enemy.tank(4);
			enemy.attack("Gaara");
			jonin.tank(4);
			ft_print_tab(genin, genin_2, jonin, enemy);
			if (jonin.getHp() <= 0)
			{
				std::cout << "You lost, Gaara died." << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0)
			{
				std::cout << "You beat Kimimaro, you WON !!" << std::endl;
				return (0);
			}
			if (enemy.getEnergy() <= 0)
			{
				std::cout << "Kimimaro uses Cursed Mark and healed himself." << std::endl;
				enemy.heal(1);
				enemy.setEnergy(2);
			}
			std::cout << std::endl;
			std::cout << "> ";
		}
		else if (str == "")
			std::cout << "> ";
		else if (str == "EXIT")
		{
			std::cout << "Leaving the game" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Choose a ninja to attack Kimimaro : Naruto, Rock Lee or Gaara. Or write EXIT to leave." << std::endl;
			std::cout << "> ";
		}
	}
	/*std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << genin.getEnergy() << std::endl;
	genin.setDmg(10);
    genin.attack("Sasuke");
    genin.tank(100);
    genin.heal(100);*/
	
	
/*    ClapTrap test("Le Bo Jack");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	test.setEnergy(1);
    test.setDmg(10);
	test.attack("Zer0");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHp() << "\033[m" << std::endl;
	test.tank(42);
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHp() << "\033[m" << std::endl;
	test.heal(31);
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "HP of my ClapTrap :" << test.getHp() << std::endl;
    test.tank(10);*/
    return (0);
}