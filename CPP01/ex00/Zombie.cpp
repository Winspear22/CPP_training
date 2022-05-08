/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:35:55 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 15:48:29 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	this->write_name();
	std::cout << "*\033[1;31mdies dramatically\033[1;37m*" << std::endl;
	return ;
}

void Zombie::announce( void )
{
	this->write_name();
	std::cout << "\033[1;32mBraiiiiiiinnnzzzZ...\033[1;37m" << std::endl;
}

void Zombie::write_name( void ) const
{
	std::cout << this->_name << ": ";
}