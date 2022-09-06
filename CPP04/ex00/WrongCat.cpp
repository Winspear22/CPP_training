/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:25:20 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:04:40 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "\e[34mWrongCat\e[0m original constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & copy )
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "Copy assignement operator called." << std::endl;
	return (*this);
} 

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Fake Meow !" << std::endl; 
	return ;
}