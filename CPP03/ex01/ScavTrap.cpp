/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:52:23 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 03:16:38 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	this->getName() = name;
	//std::cout << "\033[1;37mScavTrap Constructor called\033[0m" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap & copy )
{
	std::cout << "\033[1;37mScavTrap Copy constructor called\033[0m" << std::endl;
/*	this->_name() = copy.getName();
	this->_attack_damage = copy.getDmg();
	this->_energy_points = copy.getEnergy();
	this->_hit_points = copy.getHp();*/
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[1;37mScavTrap Destructor called\033[0m" << std::endl;
    return ;
}

void ScavTrap::attack( const std::string & target )
{
	/*std::cout << "ScavTrap \033[1;32m" << this->_name << "\033[0m attacks \033[1;37m"
	<< target << "\033[0m, causing \033[1;32m"
	<< this->_attack_damage << "\033[0m points of damage! " << std::endl;
	std::cout << this->getName() << " \033[1;32m1 point of energy.\033[0m" << std::endl;
	setEnergy(this->_energy_points - 1);*/
    std::cout << "ScavTrap " << getName() << " attacks" << std::endl;
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode." << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}