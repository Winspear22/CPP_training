/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:34:58 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 18:35:32 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie_1;
	Zombie zombie_3("Zakaria");
	
    zombie_1 = newZombie("Adnen");
	zombie_1->write_name();
	zombie_3.write_name();
	randomChump("Taqwa");
    delete zombie_1;
    return (0);
}