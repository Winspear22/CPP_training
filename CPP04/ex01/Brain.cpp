/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:46:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 19:00:58 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "\e[93mBrain\e[0m original constructor called." << std::endl;
	return ;
}

Brain::Brain( const Brain & copy )
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Brain & Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain Copy assignement operator called." << std::endl;
	return (*this);
} 

Brain::~Brain( void )
{
	std::cout << "\e[33mBrain destructor called.\e[0m" << std::endl;
	return ;
}