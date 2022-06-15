/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:57:59 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 03:16:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _hit_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout << "\033[1;33mConstructor called\033[0m" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
//	std::cout << "\033[1;33mConstructor called\033[0m" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap & copy )
{
	std::cout << "\033[1;33mCopy constructor called\033[0m" << std::endl;
	this->_name = copy.getName();
	this->_attack_damage = copy.getDmg();
	this->_energy_points = copy.getEnergy();
	this->_hit_points = copy.getHp();
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "\033[1;33mDestructor called\033[0m" << std::endl;
    return ;
}

std::string ClapTrap::getName( void )
{
	return (this->_name);
}

int	ClapTrap::getHp( void )
{
	return (this->_hit_points);
}

int	ClapTrap::getDmg( void )
{
	return (this->_attack_damage);
}

int ClapTrap::getEnergy( void )
{
	return (this->_energy_points);
}

void ClapTrap::setHp( int amount )
{
	this->_hit_points = amount;
	return ;
}

void ClapTrap::setDmg( int amount )
{
	this->_attack_damage = amount;
	return ;
}

void ClapTrap::setEnergy( int amount )
{
	this->_energy_points = amount;
	return ;
}

void ClapTrap::attack( const std::string & target )
{
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m attacks \033[1;37m"
	<< target << "\033[0m, causing \033[1;32m"
	<< this->_attack_damage << "\033[0m points of damage! " << std::endl;
	std::cout << this->getName() << " \033[1;32m1 point of energy.\033[0m" << std::endl;
	setEnergy(this->_energy_points - 1);
	return ;
}

void ClapTrap::tank( unsigned int amount )
{
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m tanks \033[1;32m" << amount
	<< "\033[0m of damages on his HP." << std::endl;
	setHp(this->_hit_points - amount);
	return ;
}

void ClapTrap::heal( unsigned int amount )
{
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m heals \033[1;32m" << amount << "\033[0m of HP" << std::endl;
	std::cout << this->getName() << " has lost \033[1;32m1 point of energy.\033[0m" << std::endl;
	setEnergy(this->_energy_points - amount);
	return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}