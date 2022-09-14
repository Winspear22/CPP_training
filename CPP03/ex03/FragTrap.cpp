/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:25:15 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 16:55:16 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "\033[0;33mFragTrap constructor called.\033[0m" << std::endl;
	this->_Hit_points = 100;
	if (!_Energy_points)
		this->_Energy_points = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "\033[0;33mFragTrap constructor called.\033[0m" << std::endl;
	this->_Hit_points = 100;
	if (!_Energy_points)
		this->_Energy_points = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap( const FragTrap & copy )
{
	this->_Hit_points = 100;
	if (!_Energy_points)
		this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "\033[0;36mFragTrap copy constructor called.\033[0m" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "\033[0;33mFragTrap destructor called.\033[0m" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
    std::cout << "\033[0;34mCopy assignment operator called.\033[0m" << std::endl;
    if ( this != &rhs )
    {
		this->_name = rhs._name;
		this->_Hit_points = rhs.gethp();
		this->_Energy_points = rhs.getmana();
		this->_Attack_damage = rhs.getdmg();
    }
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "\033[1;37m[FragTrap's function] \033[1;32m" << getname() << "\033[1;37m is asking for a high five.\033[m" << std::endl;
	return ;
}

void FragTrap::attack( const std::string & target )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "\033[0;36m[FragTrap's function] \033[1;32m" << getname() << "\033[0;36m is dead. It cannot attack\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "\033[0;36m[FragTrap's function] \033[1;32m" << getname() << " \033[0;36mhas no energy to attack\033[m." << std::endl;
        return ;
    }
	std::cout << "\033[0;36m[FragTrap's function] \033[1;32m" << getname() << "\033[0;36m attacks " << target << " causing \033[1;35m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
	return ;
}