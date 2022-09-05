#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal original constructor called." << std::endl;
	return ;
}

Animal::Animal( const Animal & copy )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	return (*this);
} 

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}