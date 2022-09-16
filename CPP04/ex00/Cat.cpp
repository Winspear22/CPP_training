/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/16 20:16:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "\e[92mCat\e[0m original constructor called." << std::endl;
	Animal::type = "\e[32mCat\e[0m";
	return ;
}

Cat::Cat( const Cat & copy ): Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	Animal::type = rhs.getType();
	return (*this);
} 

Cat::~Cat( void )
{
	std::cout << "\e[32mCat destructor called.\e[0m" << std::endl;
	return ;
}

void Cat::makeSound( void ) const
{
	std::cout << "\e[32mMiou !\e[0m" << std::endl; 
	return ;
}
