/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 19:28:51 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "\e[92mCat\e[0m original constructor called." << std::endl;
	Animal::type = "\e[32mCat\e[0m";
	_Brain = new Brain();
	return ;
}

Cat::Cat( const Cat & copy )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	_Brain = new Brain();
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	Animal::type = rhs.getType();
	_Brain = new Brain();
	return (*this);
} 

Cat::~Cat( void )
{
	std::cout << "\e[32mCat destructor called.\e[0m" << std::endl;
	delete _Brain;
	return ;
}

void Cat::makeSound( void ) const
{
	std::cout << "\e[32mMiou !\e[0m" << std::endl; 
	return ;
}

Brain *Cat::getBrain(void) const
{
    return (this->_Brain);
}