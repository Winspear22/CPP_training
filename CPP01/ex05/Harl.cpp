/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:18:46 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 19:50:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void Harl::debug( void )
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::complain( std::string level )
{
	int i;
	std::string tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	void (Harl::*level_selection[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4)
	{
		if (level == tab_level[i])
			(this->*level_selection[i])();
		i++;
	}
	return ;
}