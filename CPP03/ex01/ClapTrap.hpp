/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:57:46 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 03:05:23 by adaloui          ###   ########.fr       */
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
    ClapTrap( ClapTrap & copy );
    ~ClapTrap( void );
    ClapTrap & operator=( ClapTrap const & rhs );

	void 	attack( const std::string & target );
	void 	tank( unsigned int amount );
	void 	heal( unsigned int amount );
	int		getHp( void );
	int		getDmg( void );
	int 	getEnergy( void );
	std::string getName( void );
	void	setHp( int amount );
	void	setDmg( int amount );
	void	setEnergy( int amount );

private:
    std::string _name;
    int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
};

std::string ft_append_string(std::string str);
void	ft_print_tab(ClapTrap & genin, ClapTrap & genin_2, ClapTrap & jonin, ClapTrap & enemy);

#endif