#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_i = 0;
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int i )
{
	return ;
}

Fixed::Fixed( const float j )
{
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
		this->_i = rhs.getRawBits();
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