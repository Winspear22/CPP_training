#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat original constructor called." << std::endl;
	return ;
}

Cat::Cat( const Cat & copy )
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Copy assignement operator called." << std::endl;
	return (*this);
} 

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}