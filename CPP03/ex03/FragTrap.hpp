/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:26:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/18 14:02:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( std::string const & name );
	FragTrap( const FragTrap & copy );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & rhs );

	void highFivesGuys( void );
	void attack( const std::string & target );

protected:
	FragTrap( void );
};

#endif