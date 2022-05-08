/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:28:00 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 15:15:41 by adaloui          ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;	 
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::_normal_message( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::choose_level Harl::_get_level_from_string( std::string level )
{
	int i;
	std::string all_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	i = 0;
	while (i < 4)
	{
		if (level == all_level[i])
			return (choose_level(i));
		i++;
	}
	return (normal_message);
}

void Harl::complain( std::string level )
{
	this->_enum_pick_level(this->_get_level_from_string(level));
	return ;
}

void Harl::_enum_pick_level( choose_level level)
{
	if (level <= this->_all_level)
	{
		switch (level)
    	{
			case enum_debug:
				this->debug();
			case enum_info:
				this->info();
			case enum_warning:
				this->warning();
			case enum_error:
				this->error();
				break ;
			default:
				this->_normal_message();
		}
	}
	return ;
}