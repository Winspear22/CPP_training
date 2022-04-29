/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:34:58 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 17:09:58 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    //Zombie* zombie_1;

    Zombie* zombie_1 = newZombie("Adnen");
   // std::cout << zombie_1->get_name();
    delete zombie_1;
    return (0);
}