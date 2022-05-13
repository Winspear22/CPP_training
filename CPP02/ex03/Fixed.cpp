/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:15:27 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/13 16:17:35 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_i = 0;
    return ;
}

Fixed::Fixed( const int i )
{
	this->_i = i << this->_bit;
	return;
}

Fixed::Fixed( const float j )
{
	int power = ft_pow(2, this->_bit);
			
	this->_i = roundf(j * power);
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

int		ft_pow(int val, int pow)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result *= val;
		i++;
	}
	return (result);
}

float Fixed::toFloat( void ) const
{
	int power;
	float result;

	power = ft_pow(2, this->_bit);
	result = (float)this->_i / power;
	return (result);
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

const Fixed & Fixed::min( const Fixed & lsh, const Fixed & rhs )
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

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}