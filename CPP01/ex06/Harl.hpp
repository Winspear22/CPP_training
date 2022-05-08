/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:28:06 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 20:12:30 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iomanip>
# include <iostream>

class Harl
{
public:
	Harl( void );
	~Harl( void );

	void complain( std::string level );
private:
	enum _choose_level
	{
		enum_debug = 0,
		enum_info = 1,
		enum_warning = 2,
		enum_error = 3,
		normal_message = -1
	};

	_choose_level _all_level;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void _normal_message( void );
	void _enum_pick_level(_choose_level _all_level);
	_choose_level _get_level_from_string( std::string level);
};

#endif