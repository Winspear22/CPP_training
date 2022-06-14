/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:43:10 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/14 22:47:50 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _i(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_i = rhs._i;
	return (*this);
}

Fixed::Fixed( const int i )
{	
	std::cout << "Int constructor called" << std::endl;
	this->_i = i << this->_bit;
	return;
}

Fixed::Fixed( const float j )
{
	int power;
	
	power = ft_power(2, this->_bit);
	this->_i = roundf(j * power);
	std::cout << "Float constructor called" << std::endl;
	return ;
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

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}
