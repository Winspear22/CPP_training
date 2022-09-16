/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:07 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/16 21:17:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*Animal::Animal( void )
{
	std::cout << "\e[1;32mAnimal\e[0m original constructor called." << std::endl;
	this->type = "\e[1;32mAnimal\e[0m";
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
	this->type = rhs.getType();
	return (*this);
} 
*/
Animal::~Animal( void )
{
	std::cout << "\e[1;32mAnimal destructor called.\e[0m" << std::endl;
	return ;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::makeSound( void ) const
{
	std::cout << "\e[1;32m*Animal sound*\e[0m" << std::endl; 
	return ;
}