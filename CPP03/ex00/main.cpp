/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:57:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 02:48:27 by adaloui          ###   ########.fr       */
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
	int cursed_mark;

	cursed_mark = 0;
	genin.setDmg(3);
	genin.setHp(11);
	genin.setEnergy(1);
	genin_2.setDmg(5);
	genin_2.setHp(15);
	genin_2.setEnergy(6);
	jonin.setDmg(6);
	jonin.setHp(25);
	jonin.setEnergy(7);
	enemy.setDmg(5);
	enemy.setHp(25);
	enemy.setEnergy(6);
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
	
	std::cout << "You are in a mission to save Sasuke, in order to get to him" << std::endl;
	std::cout << "you have to beat Kimimaro, Orochimaru's right hand. You have three ninjas " << std::endl;
	std::cout << "to help you : Naruto, Rock Lee and Gaara. Write their name to attack Kimimaro " << std::endl;
	std::cout << "and defeat him. Be carefull, if one of your ninja dies, you lose the game." << std::endl;
	std::cout << "> ";
	while (getline(std::cin, str))
	{
		if (str == "Naruto")
		{
			if (genin.getEnergy() <= 0)
				std::cout << "\033[1;31mNaruto has no more chaka, you cannot use him.\033[0m" << std::endl;
			else 
			{
				genin.attack("Kimikaro");
				enemy.tank(genin.getDmg());
				enemy.attack("Naruto");
				genin.tank(enemy.getDmg());
				ft_print_tab(genin, genin_2, jonin, enemy);
				if (genin.getHp() <= 0)
				{
					std::cout << "\033[1;31mYou lost, Naruto died." << std::endl;
					return (0);
				}
				else if (enemy.getHp() <= 0 && cursed_mark == 1)
				{
					std::cout << "\033[1;31mYou beat Kimimaro, you WON !!" << std::endl;
					return (0);
				}
				else if (enemy.getHp() <= 0 && cursed_mark == 0)
				{
					std::cout << "\033[1;33mKimimaro uses Cursed Mark and healed himself.\033[0m" << std::endl;
					enemy.heal(1);
					enemy.setEnergy(2);
					cursed_mark = 1;
				}
			}
			std::cout << std::endl;
			std::cout << "> ";
		}
		else if (str == "Rock Lee")
		{
			genin_2.attack("Kimikaro");
			enemy.tank(genin_2.getDmg());
			enemy.attack("Rock Lee");
			genin_2.tank(enemy.getDmg());
			ft_print_tab(genin, genin_2, jonin, enemy);
			if (genin_2.getHp() <= 0)
			{
				std::cout << "\033[1;31mYou lost, Rock Lee died." << std::endl;
				return (0);
			}
			else if (genin_2.getEnergy() <= 0)
			{
				std::cout << "Rock Lee has no more chaka, you cannot use him." << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0 && cursed_mark == 1)
			{
				std::cout << "\033[1;31mYou beat Kimimaro, you WON !!" << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0 && cursed_mark == 0)
			{
				std::cout << "\033[1;33mKimimaro uses Cursed Mark and healed himself.\033[0m" << std::endl;
				enemy.heal(1);
				enemy.setEnergy(2);
				cursed_mark = 1;
			}
			std::cout << std::endl;
			std::cout << "> ";
		}
		else if (str == "Gaara")
		{
			jonin.attack("Kimikaro");
			enemy.tank(jonin.getDmg());
			enemy.attack("Gaara");
			jonin.tank(enemy.getDmg());
			ft_print_tab(genin, genin_2, jonin, enemy);
			if (jonin.getHp() <= 0)
			{
				std::cout << "\033[1;31mYou lost, Gaara died." << std::endl;
				return (0);
			}
			else if (jonin.getEnergy() <= 0)
			{
				std::cout << "Gaara has no more chaka, you cannot use him." << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0 && cursed_mark == 1)
			{
				std::cout << "\033[1;32mYou beat Kimimaro, you WON !!" << std::endl;
				return (0);
			}
			else if (enemy.getHp() <= 0 && cursed_mark == 0)
			{
				std::cout << "\033[1;33mKimimaro uses Cursed Mark and healed himself.\033[0m" << std::endl;
				enemy.heal(1);
				enemy.setEnergy(2);
				cursed_mark = 1;
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
    return (0);
}