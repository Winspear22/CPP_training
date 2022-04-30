/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:15:43 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/30 18:52:11 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _nameA(name), _weapon_A(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void)
{
	std::cout << "\033[1;33m";
    std::cout << this->_nameA;
	std::cout << "\033[0m";
    std::cout << " attacks with his \033[1;31m";
	std::cout << this->_weapon_A.getType();
	std::cout << "\033[0m";
	std::cout << std::endl;
}
