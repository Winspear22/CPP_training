/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:53:50 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 16:19:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "\033[0;33mDiamondTrap constructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name )
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "\033[0;33mDiamondTrap constructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & copy )
{
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "\033[0;36mDiamondTrap copy constructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\033[0;33mDiamondTrap destructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
    std::cout << "\033[0;34mCopy assignment operator called.\033[0m" << std::endl;
    if ( this != &rhs )
    {
		this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
	return (*this);
}

void	DiamondTrap::attack( const std::string & target )
{
	ScavTrap::attack( target );
	return ;
}