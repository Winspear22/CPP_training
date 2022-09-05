#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog original constructor called." << std::endl;
	return ;
}

Dog::Dog( const Dog & copy )
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Copy assignement operator called." << std::endl;
	return (*this);
} 

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}