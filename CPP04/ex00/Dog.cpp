/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:44 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 17:43:36 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "\e[92mDog\e[0m original constructor called." << std::endl;
	Animal::type = "\e[32mDog\e[0m";
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
	Animal::type = rhs.getType();
	return (*this);
} 

Dog::~Dog( void )
{
	std::cout << "\e[32mDog destructor called.\e[0m" << std::endl;
	return ;
}

void Dog::makeSound( void ) const
{
	std::cout << "\e[32mWaf !\e[0m" << std::endl; 
	return ;
}