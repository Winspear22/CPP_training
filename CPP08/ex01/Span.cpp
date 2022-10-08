#include "Span.hpp"

Span::Span()
{
	std::cout << "\033[1;32mDefault constructor without argument called.\033[0m" << std::endl;
}

Span::Span( unsigned int nb )
{
    std::cout << "Constructor Span called" << std::endl;
}

Span::Span( Span const &src )
{
    std::cout << "\033[1;36mCopy constructor called.\033[0m" << std::endl;
    *this = src;
}

Span &Span::operator=( Span const &rhs )
{
	std::cout << "\033[0;34mAssignment overload operator called.\033[0m" << std::endl;
    return (*this);
}

Span::~Span( void )
{
	std::cout << "\033[1;34mDestructor called.\033[0m" << std::endl;
}

void Span::AddNumber( void )
{
	return ;
}
