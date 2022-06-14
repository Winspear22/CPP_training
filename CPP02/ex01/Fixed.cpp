/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:43:10 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/13 16:43:12 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_i = 0;
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int i )
{
			
	std::cout << "Int constructor called" << std::endl;
		this->_i = i << this->_bit;
	return;
}

Fixed::Fixed( const float j )
{
	int power = ft_pow(2, this->_bit);

			
	std::cout << "Float constructor called" << std::endl;
	this->_i = roundf(j * power);
	return ;
}

Fixed::Fixed( const Fixed & n )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if ( this != &rhs )
		this->_i = rhs._i;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
	int		i = 0;
	int		result;
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
	int power = ft_pow(2, this->_bit);
	float	result = (float)this->_i / power;
	return (result);}


std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}
