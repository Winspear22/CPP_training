/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:26:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/17 20:30:42 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string const & name );
	FragTrap( const FragTrap & copy );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & rhs );

	void highFivesGuys( void );
	void attack( const std::string & target );

private:
	
};

#endif