/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:07 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:51:20 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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