/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:53:50 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/04 15:05:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "\033[0;31mDiamondTrap constructor called.\033[0m" << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "\033[0;31mDiamondTrap constructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & copy )
{
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "\033[0;31mDiamondTrap copy constructor called.\033[0m" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\033[0;31mDiamondTrap destructor called.\033[0m" << std::endl;
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

void DiamondTrap::whoAmI( void )
{
	std::cout << "\033[1;37m[DiamondTrap's function] Name of the DiamondTrap : \033[1;32m" << _name << "\033[m." << std::endl;
	std::cout << "\033[1;37m[DiamondTrap's function] Name of the ClapTrap (sous-objet) : \033[1;32m" << ClapTrap::_name << "\033[m." << std::endl;

	return ;
}
