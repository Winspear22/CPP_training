/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:40 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 17:13:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name(""), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "\033[0;32mConstructor called.\033[0m" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "\033[0;32mConstructor called.\033[0m" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & copy )
{
	std::cout << "\033[0;33mCopy Constructor called.\033[0m" << std::endl;
	this->_name = copy._name;
    this->_Hit_points = copy._Hit_points;
    this->_Energy_points = copy._Energy_points;
    this->_Attack_damage = copy._Attack_damage;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "\033[0;32mDestructor called.\033[0m" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
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

void ClapTrap::attack( const std::string & target )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << "\033[0;36m is dead. It cannot attack\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << " \033[0;36mhas no energy to attack\033[m." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << "\033[0;36m attacks " << target << " causing \033[1;35m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
	return ;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_points <= 0)
    {
        std::cout << "\033[1;31mClapTrap \033[1;32m" << getname() << " \033[1;31mis already dead.\033[m" << std::endl;
        return ;
    }
	std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << "\033[0;36m takes \033[1;31m" << amount << " HP \033[0;36mof damages\033[0m. " << std::endl;
    this->_Hit_points = this->_Hit_points - amount;
	if (this->_Hit_points <= 0)
    {
        std::cout << "\033[1;31mClapTrap \033[1;32m" << getname() << "\033[1;31m is dead. Setting all stats to 0\033[m." << std::endl;
		this->setdmg(0);
		this->setmana(0);
		return ;
    }
	return ;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << "\033[0;36m is dead. It cannot heal\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "ClapTrap \033[1;32m" << getname() << "\033[m has no energy to heal." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mClapTrap \033[1;32m" << getname() << "\033[0;36m healed \033[1;31m" << amount << " HP\033[0;36m of damages\033[m." << std::endl;
    this->_Hit_points = this->_Hit_points + amount;
	setmana(this->_Energy_points - 1);
	if (this->_Energy_points <= 0)
    {
        std::cout << "ClapTrap \033[1;32m" << getname() << "\033[m has no energy." << std::endl;
        return ;
    }
	return ;
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

void ClapTrap::setname( std::string new_name )
{
	this->_name = new_name;
}

void ClapTrap::sethp( int i )
{
	this->_Hit_points = i;
}

void ClapTrap::setmana( int i )
{
	this->_Energy_points = i;
}

void ClapTrap::setdmg( int i )
{
	this->_Attack_damage = i;
}