/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:55:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 15:51:45 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap & copy );
    ~ScavTrap( void );
    ScavTrap & operator=( ScavTrap const & rhs );

    void attack( const std::string & target );
	void guardGate();
};

#endif