/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:48:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 19:40:58 by adaloui          ###   ########.fr       */
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
	std::cout << "*Dies*" << std::endl;
	return ;
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void )
{
	std::cout  << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}