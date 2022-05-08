/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:48:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 16:39:12 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout  << this->_name << ": ";
	std::cout << "*\033[1;31mDies\033[1;37m*" << std::endl;
	return ;
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void )
{
	std::cout  << this->_name << ": ";
	std::cout << "\033[1;32mBraiiiiiiinnnzzzZ...\033[1;37m" << std::endl;
	return ;
}