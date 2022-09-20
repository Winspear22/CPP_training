/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:51:47 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "\e[92mCat\e[0m original constructor called." << std::endl;
	Animal::type = "\e[32mCat\e[0m";
	_Brain = new Brain();
	return ;
}

Cat::Cat( const Cat & copy ): Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	_Brain = new Brain();
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "\e[96mCat Copy\e[0m assignement operator called." << std::endl;
	if (&rhs == this)
        return (*this);
	Animal::type = rhs.getType();
    *(this->_Brain) = *(rhs._Brain);
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