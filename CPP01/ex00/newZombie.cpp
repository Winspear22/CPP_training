/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:35:26 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 17:04:14 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *new_zombie;

	new_zombie  = new Zombie(name);
	
	return (new_zombie);
}

void randomChump( std::string name )
{
	(void) name;
	return ;
}