/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:50 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 20:19:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string const & name )
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & copy )
{
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
    {
		this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
	return (*this);
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode." << std::endl;
	return ;
}

void ScavTrap::attack( const std::string & target )
{
	if (this->_Energy_points <= 0)
    {
        std::cout << "The ScavTrap \e[92m" << this->getname() << " has no energy." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mScavTrap \e[92m" << this->getname() << "\033[0;36m attacks " << target << " causing \e[91m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	this->setmana(this->_Energy_points - 1);
}