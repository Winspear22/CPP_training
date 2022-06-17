/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:17:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 18:08:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const ClapTrap & copy )
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
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

std::string ClapTrap::getname( void )
{
    return (this->_name);
}

int ClapTrap::gethp( void )
{
    return (this->_Hit_points);
}

int ClapTrap::getmana( void )
{
    return (this->_Energy_points);
}

int ClapTrap::getdmg( void )
{
    return (this->_Attack_damage);
}

void ClapTrap::setmana( int i )
{
	this->_Energy_points = i;
}

void ClapTrap::setname( std::string new_name )
{
	this->_name = new_name;
}

void ClapTrap::sethp( int i )
{
	this->_Hit_points = i;
}

void ClapTrap::setdmg( int i )
{
	this->_Attack_damage = i;
}

void ClapTrap::attack( const std::string & target )
{
	if (this->_Energy_points <= 0)
    {
        std::cout << "The ClapTrap \e[92m" << getname() << " has no energy." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mClapTrap \e[92m" << getname() << "\033[0;36m attacks " << target << " causing \e[91m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_Hit_points <= 0)
    {
        std::cout << "\033[1;31mThe ClapTrap " << getname() << " \033[1;31mis dead.\033[m" << std::endl;
        return ;
    }
	std::cout << "ClapTrap \e[92m" << getname() << "\033[m takes " << amount << " hp of damages " << std::endl;
    this->_Hit_points = this->_Hit_points - amount;
	if (this->_Hit_points <= 0)
    {
        std::cout << "\033[1;31mThe ClapTrap \e[92m" << getname() << "\033[1;31m is dead.\033[m" << std::endl;
        return ;
    }
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_Energy_points <= 0)
    {
        std::cout << "The ClapTrap \e[92m" << getname() << "\033[m has no energy." << std::endl;
        return ;
    }
	std::cout << "ClapTrap \e[92m" << getname() << "\033[m healed " << amount << " hp of damages " << std::endl;
    this->_Hit_points = this->_Hit_points + amount;
	setmana(this->_Energy_points - 1);
	if (this->_Energy_points <= 0)
    {
        std::cout << "The ClapTrap \e[92m" << getname() << "\033[m has no energy." << std::endl;
        return ;
    }
}