/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:26:19 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 20:31:15 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const & name )
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap( const FragTrap & copy )
{
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
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

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five." << std::endl;
	return ;
}

void FragTrap::attack( const std::string & target )
{
	if (this->_Energy_points <= 0)
    {
        std::cout << "The FragTrap \e[92m" << this->getname() << " has no energy." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mFragTrap \e[92m" << this->getname() << "\033[0;36m attacks " << target << " causing \e[91m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	this->setmana(this->_Energy_points - 1);
}