/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:24:38 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/30 19:56:25 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string init_type): _type(init_type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

const std::string& Weapon::getType(void) const
{
    return (this->_type);
}

bool Weapon::setType(std::string const & type_2)
{
	this->_type = type_2;
	return (true);
}

