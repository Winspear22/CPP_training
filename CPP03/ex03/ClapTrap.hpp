/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:17:34 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/18 13:41:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iomanip>
# include <iostream>

class ClapTrap
{
public:
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap & copy);
    ~ClapTrap( void );
    ClapTrap & operator=( ClapTrap const & rhs );

    void attack( const std::string & target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

    std::string getname( void ) const;
    int gethp( void ) const;
    int getmana( void ) const;
    int getdmg( void ) const;
	void sethp( int i );
    void setmana( int i );
    void setdmg( int i );
    void setname( std::string new_name );
    
protected:
    std::string _name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;
    ClapTrap( void );

};

#endif