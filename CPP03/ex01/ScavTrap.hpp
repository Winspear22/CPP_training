/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:52:21 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 03:08:06 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( ScavTrap & copy );
    ~ScavTrap( void );
    ScavTrap & operator=( ScavTrap const & rhs );
    
	void 	attack( const std::string & target );
    void	guardGate( void );
private:  
};

#endif