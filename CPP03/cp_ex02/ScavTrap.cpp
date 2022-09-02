/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:45 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 02:44:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "\033[0;32mScavTrap Constructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )//: _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "\033[0;32mScavTrap Constructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & copy )
{
	std::cout << "\033[0;33mScavTrap Copy Constructor called.\033[0m" << std::endl;
    *this = copy;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[0;32mScavTrap Destructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "\033[0;34mScavTrap Copy assignment operator called.\033[0m" << std::endl;
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
		std::cout << "\033[0;36mScavTrap \033[1;32m" << getname() << "\033[0;36m is dead. It cannot attack\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "\033[0;36mScavTrap \033[1;32m" << getname() << " \033[0;36mhas no energy to attack\033[m." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mScavTrap \033[1;32m" << getname() << "\033[0;36m attacks " << target << " causing \033[1;35m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
	return ;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode." << std::endl;
	return ;
}