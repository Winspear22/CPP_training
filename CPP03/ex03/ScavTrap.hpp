/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:57 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/18 14:02:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap( std::string const & name );
	ScavTrap( const ScavTrap & copy );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & rhs );

	void guardGate( void );
	void attack( const std::string & target );

protected:
	ScavTrap( void );
};

#endif