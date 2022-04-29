/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:36:51 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 17:08:03 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
public:
	Zombie( void );
	~Zombie( void );

	void announce( void );
	void get_name( void ) const;
private:
	std::string name;	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif