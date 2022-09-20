/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:46:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:31:05 by adaloui          ###   ########.fr       */
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
	int i;

	i = 0;
	std::cout << "\e[93mBrain\e[0m Copy assignement operator called." << std::endl;
	if (&rhs == this)
		*this = rhs; 
	while (i < 100)
	{
    	this->_ideas[i] = rhs._ideas[i];
		i++;
	}
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


