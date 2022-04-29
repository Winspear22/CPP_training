/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:35:55 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 17:08:27 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
	//name = this->_name;
	//this->_name = name;
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

std::string Zombie::get_name( void ) const
{
	//std::cout << this->_name << std::endl;
	return (this->name);
}