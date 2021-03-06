/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:43:15 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/14 22:44:51 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iomanip>
# include <iostream>
# include <cmath>

class Fixed
{
public:

    Fixed( void );
	Fixed( const int i );
    ~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	Fixed( const float j );
	Fixed( const Fixed & n );

	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float	toFloat( void ) const;
	int 	toInt( void ) const;
private:
	int _i;
	static const int _bit = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
int				ft_power(int nb, int power);

#endif