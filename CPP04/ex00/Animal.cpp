/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:07 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:05:59 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "\e[1;32mAnimal\e[0m original constructor called." << std::endl;
	return ;
}

Animal::Animal( const Animal & copy )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	return (*this);
} 

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::makeSound( void ) const
{
	std::cout << "*Animal sound*" << std::endl; 
	return ;
}