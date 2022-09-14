/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:25:20 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/13 15:51:38 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap & copy );
    ~FragTrap( void );
    FragTrap & operator=( FragTrap const & rhs );

    void highFivesGuys( void );
	void attack( const std::string & target );
};

#endif