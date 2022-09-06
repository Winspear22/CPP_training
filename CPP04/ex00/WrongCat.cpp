/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:25:20 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 17:34:39 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "\e[34mWrongCat\e[0m original constructor called." << std::endl;
	WrongAnimal::type = "\e[34mWrongCat\e[0m";
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
	WrongAnimal::type = rhs.getType();
	return (*this);
} 

WrongCat::~WrongCat( void )
{
	std::cout << "\e[34mWrongCat destructor called.\e[0m" << std::endl;
	return ;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "\e[34mFake Meow !\e[0m" << std::endl; 
	return ;
}