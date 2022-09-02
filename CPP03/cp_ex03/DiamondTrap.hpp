/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:54:01 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/02 21:37:03 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap & copy );
    ~DiamondTrap( void );
    DiamondTrap & operator=( DiamondTrap const & rhs );

	void whoAmI( void );
	void attack( const std::string & target );

private:
};

#endif