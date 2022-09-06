/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:43:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:04:08 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "\e[1;34mWrongAnimal\e[0m original constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & copy )
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Copy assignement operator called." << std::endl;
	return (*this);
} 

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "\e[1;31mWrongAnimal destructor called.\e[0m" << std::endl;
	return ;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "*FakeAnimal sound*" << std::endl; 
	return ;
}