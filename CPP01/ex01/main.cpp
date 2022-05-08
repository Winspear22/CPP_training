/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:47:59 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 16:38:24 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void announce_every_z( Zombie* z, int N )
{
	int i;

	i = 0;
	while (i < N)
	{
		z[i].announce();
		i++;
	}
}

int main(void)
{
	Zombie *Z_horde;

	Z_horde = zombieHorde(10, "\033[1;37mAdnen");
	announce_every_z(Z_horde, 10);
	delete [] Z_horde;
	return (0);
}