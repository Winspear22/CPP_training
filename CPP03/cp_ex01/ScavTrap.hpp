/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/08/31 16:08:09 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    ScavTrap( void );
    //ScavTrap( std::string name );
    ScavTrap( const ScavTrap & copy );
    ~ScavTrap( void );
    ScavTrap & operator=( ScavTrap const & rhs );

    void attack( const std::string & target );
	void guardGate( );
};

#endif