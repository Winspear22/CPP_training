/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:45 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 17:13:50 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "\033[0;35mScavTrap Constructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "\033[0;35mScavTrap Constructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & copy )
{
	std::cout << "\033[0;36mScavTrap Copy Constructor called.\033[0m" << std::endl;
	this->_name = copy._name;
    this->_Hit_points = copy._Hit_points;
    this->_Energy_points = copy._Energy_points;
    this->_Attack_damage = copy._Attack_damage;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[0;35mScavTrap Destructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "\033[0;34mScavTrap assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
    {
		this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
	return (*this);
}

void ScavTrap::attack( const std::string & target )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "\033[0;36m[ScavTrap's function] \033[1;32m" << getname() << "\033[0;36m is dead. It cannot attack\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "\033[0;36m[ScavTrap's function] \033[1;32m" << getname() << " \033[0;36mhas no energy to attack\033[m." << std::endl;
        return ;
    }
	std::cout << "\033[0;36m[ScavTrap's function] \033[1;32m" << getname() << "\033[0;36m attacks " << target << " causing \033[1;35m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
	return ;
}

void ScavTrap::guardGate( void )
{
	std::cout << "\033[1;37m[ScavTrap's function] \033[1;32m" << getname() << "\033[1;37m has entered Gate keeper mode\033[m." << std::endl;
	return ;
}