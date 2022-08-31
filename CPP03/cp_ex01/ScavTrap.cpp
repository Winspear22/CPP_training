/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:45 by adaloui           #+#    #+#             */
/*   Updated: 2022/08/31 16:08:51 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "\033[0;32mConstructor called.\033[0m" << std::endl;
	return ;
}

/*ScavTrap::ScavTrap( std::string name ): _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "\033[0;32mConstructor called.\033[0m" << std::endl;
	return ;
}*/

ScavTrap::ScavTrap( const ScavTrap & copy )
{
	std::cout << "\033[0;33mCopy Constructor called.\033[0m" << std::endl;
    *this = copy;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[0;32mDestructor called.\033[0m" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
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

/*void attack( const std::string & target )
void guardGate( )*/