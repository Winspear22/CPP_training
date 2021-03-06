/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:00:41 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/14 22:52:33 by adaloui          ###   ########.fr       */
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
	Fixed( const Fixed & n );
    ~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	Fixed( const int i );
	Fixed( const float j );

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
int				ft_power(int nb, int power);

#endif