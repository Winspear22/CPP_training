/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:46:57 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 19:34:22 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string & name );
	ScavTrap( const ScavTrap & copy );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & rhs );

	void guardGate( void );
private:

};

#endif