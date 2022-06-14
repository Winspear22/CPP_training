/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:59:43 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/15 00:23:35 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _i(0)
{
    return ;
}

Fixed::Fixed( const Fixed & n )
{
	*this = n;
	return ;
}

Fixed::~Fixed( void )
{
    return ;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->_i = rhs._i;
	return (*this);
}

Fixed::Fixed( const int i )
{
	this->_i = i << this->_bit;
	return;
}

Fixed::Fixed( const float j )
{
	int power;
	
	power = ft_power(2, this->_bit);
	this->_i = roundf(j * power);
	return ;
}

int Fixed::getRawBits( void ) const
{
	return (this->_i);
}

void Fixed::setRawBits( int const raw )
{
	this->_i = raw;
	return ;
}

int Fixed::toInt( void ) const
{
	return (this->_i >> this->_bit);
}

int		ft_power(int nb, int power)
{
	int		new_nb;

	new_nb = 1;
	while (power--)
		new_nb *= nb;
	return (new_nb);
}

float Fixed::toFloat( void ) const
{
	int		power;
	float	float_result;
	 
	power = ft_power(2, this->_bit);
	float_result = (float)this->_i / power;
	return (float_result);
}

bool Fixed::operator>( Fixed const & rhs ) const
{
	return ( this->getRawBits() > rhs.getRawBits() );
}

bool Fixed::operator<( Fixed const & rhs ) const
{
	return ( this->getRawBits() < rhs.getRawBits() );
}

bool Fixed::operator>=( Fixed const & rhs ) const
{
	return ( this->getRawBits() >= rhs.getRawBits() );
}

bool Fixed::operator<=( Fixed const & rhs ) const
{
	return ( this->getRawBits() <= rhs.getRawBits() );
}

bool Fixed::operator!=( Fixed const & rhs ) const
{
	return ( this->getRawBits() == rhs.getRawBits() );
}

bool Fixed::operator==( Fixed const & rhs ) const
{
	return (rhs != *this);
}
	
Fixed Fixed::operator+( Fixed const & rhs ) const
{
	return Fixed( this->getRawBits() + rhs.getRawBits());
}

Fixed Fixed::operator-( Fixed const & rhs ) const
{
	return Fixed( this->getRawBits() - rhs.getRawBits());
}

Fixed Fixed::operator*( Fixed const & rhs ) const
{
	return Fixed( this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs ) const
{
	return Fixed( this->getRawBits() / rhs.getRawBits());
}

Fixed & Fixed::operator++( void )
{
	this->_i++;
	return (*this);
}

Fixed & Fixed::operator--( void )
{
	this->_i--;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp;

	tmp = *this;
	++*this;
	return (tmp);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp;

	tmp = *this;
	--*this;
	return (tmp);
}

Fixed & Fixed::min( Fixed & lsh, Fixed & rhs )
{
	if (lsh < rhs)
		return (lsh);
	else
		return (rhs);
}

Fixed & Fixed::max( Fixed & lsh, Fixed & rhs )
{
	if (lsh > rhs)
		return (lsh);
	else
		return (rhs);
}

const Fixed & Fixed::max( const Fixed & lsh, const Fixed & rhs )
{
	if (lsh > rhs)
		return (lsh);
	else
		return (rhs);
}

const Fixed & Fixed::min( const Fixed & lsh, const Fixed & rhs )
{
	if (lsh < rhs)
		return (lsh);
	else
		return (rhs);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}