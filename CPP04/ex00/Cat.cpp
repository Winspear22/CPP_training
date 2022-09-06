/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 14:05:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "\e[92mCat\e[0m original constructor called." << std::endl;
	return ;
}

Cat::Cat( const Cat & copy )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	return (*this);
} 

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miou !" << std::endl; 
	return ;
}
