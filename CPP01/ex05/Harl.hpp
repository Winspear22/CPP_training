/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:19:14 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/06 20:30:58 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Harl
{
public:
	Harl( void );
	~Harl( void );

	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif