/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:15:31 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/13 16:41:33 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define SUCCESS true
# define FAILURE false


# include <iomanip>
# include <iostream>
# include <cmath>
# include "Point.hpp"

class Fixed
{
public:

    Fixed( void );
	Fixed( const int i );
	Fixed( const float j );
	Fixed( const Fixed & n );
    ~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	
	bool operator>( Fixed const & rhs ) const;
	bool operator<( Fixed const & rhs ) const;
	bool operator>=( Fixed const & rhs ) const;
	bool operator<=( Fixed const & rhs ) const;
	bool operator!=( Fixed const & rhs ) const;
	bool operator==( Fixed const & rhs ) const;
	
	Fixed operator+( Fixed const & rhs ) const;
	Fixed operator-( Fixed const & rhs ) const;
	Fixed operator*( Fixed const & rhs ) const;
	Fixed operator/( Fixed const & rhs ) const;

	Fixed & operator++( void );
	Fixed & operator--( void );
	Fixed operator++( int );
	Fixed operator--( int );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed & min( Fixed & lhs, Fixed & rhs );
	static const Fixed & min( const Fixed & lhs, const Fixed & rhs );
	static Fixed & max( Fixed & lhs, Fixed & rhs );
	static const Fixed & max( const Fixed & lhs, const Fixed & rhs );

private:
	int _i;
	static const int _bit = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
int				ft_pow(int val, int pow);

#endif