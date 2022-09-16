/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:44 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/15 05:29:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "\e[92mDog\e[0m original constructor called." << std::endl;
	Animal::type = "\e[32mDog\e[0m";
	_Brain = new Brain();
	return ;
}

Dog::Dog( const Dog & copy ): Animal()
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	_Brain = new Brain();
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Copy assignement operator called." << std::endl;
	Animal::type = rhs.getType();
	_Brain = new Brain();
	return (*this);
} 

Dog::~Dog( void )
{
	std::cout << "\e[32mDog destructor called.\e[0m" << std::endl;
	delete _Brain;
	return ;
}

void Dog::makeSound( void ) const
{
	std::cout << "\e[32mWaf !\e[0m" << std::endl; 
	return ;
}

Brain *Dog::getBrain(void) const
{
    return (this->_Brain);
}