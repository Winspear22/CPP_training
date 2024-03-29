/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:46:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/15 05:19:21 by user42           ###   ########.fr       */
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
	*this = rhs; 
	return (*this);
} 

Brain::~Brain( void )
{
	std::cout << "\e[33mBrain destructor called.\e[0m" << std::endl;
	return ;
}

std::string Brain::getIdeas(int idea_nb)
{
    return (this->_ideas[idea_nb]);
}

void Brain::setIdeas(std::string str, int idea_nb)
{
    this->_ideas[idea_nb] = str;
    return ;
}


