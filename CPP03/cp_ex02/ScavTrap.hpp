/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 02:45:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap & copy );
    ~ScavTrap( void );
    ScavTrap & operator=( ScavTrap const & rhs );

    void attack( const std::string & target );
	void guardGate( );

private:
};

#endif