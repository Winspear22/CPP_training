/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:45:50 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 19:33:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string & name ): ClapTrap()
{
	this->_name = name;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & copy ): ClapTrap()
{
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