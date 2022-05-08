/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:34:58 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 16:04:05 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie_1;
	Zombie zombie_3("Zakaria");
	
    zombie_1 = newZombie("\033[1;37mAdnen");
	zombie_1->announce();
	zombie_3.announce();
	randomChump("Taqwa");
    delete zombie_1;
    return (0);
}