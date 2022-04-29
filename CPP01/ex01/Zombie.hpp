/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:46:10 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 19:41:00 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
public:
	Zombie( void );
	~Zombie( void );

	void announce( void );
	void set_name( std::string name);
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
void announce_every_z( Zombie* z, int i);

#endif