/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:44 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:05:26 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "\e[92mDog\e[0m original constructor called." << std::endl;
	return ;
}

Dog::Dog( const Dog & copy )
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Copy assignement operator called." << std::endl;
	return (*this);
} 

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

void Dog::makeSound( void ) const
{
	std::cout << "Waf !" << std::endl; 
	return ;
}