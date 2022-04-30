/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:14:43 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/30 19:58:35 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _nameB(name), _weapon_B(NULL)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::setWeapon(Weapon& n_weapon)
{
	this->_weapon_B = &n_weapon;
	return ;
}

void HumanB::attack(void)
{
	std::cout << "\033[1;33m";
	std::cout << this->_nameB;
	std::cout << "\033[0m";
	std::cout << " attacks with his \033[1;31m";
	std::cout << this->_weapon_B->getType() << std::endl;
	std::cout << "\033[0m";
	return ;
}