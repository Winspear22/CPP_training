/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:48:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 19:24:17 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z_horde;
    int i;

    i = 0;
    z_horde = new Zombie[N];
    while (i < N)
    {
        z_horde[i].set_name(name);
        i++;
    }
    return (z_horde); 
}