/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 01:32:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iomanip>
# include <iostream>

class ClapTrap
{
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap & copy );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap const & rhs );
	
	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getname( void );
	int gethp( void );
	int getmana( void );
	int getdmg( void );
	void setname( std::string new_name );
	void sethp( int i );
    void setmana( int i );
    void setdmg( int i );
	

protected:
	std::string _name;
	int _Hit_points;
	int _Energy_points;
	int _Attack_damage;
};

#endif