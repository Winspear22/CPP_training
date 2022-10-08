#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
	std::cout << "\033[1;32mDefault constructor without argument called.\033[0m" << std::endl;
}

Span::Span( unsigned int nb )
{
	this->_N = nb;
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
    if (&rhs == this)
		return *this;

	this->_N = rhs._N;
	    this->_vector = rhs._vector;
    this->_list = rhs._list;

	return (*this);
}

Span::~Span( void )
{
	std::cout << "\033[1;34mDestructor called.\033[0m" << std::endl;
}

void Span::AddNumber( void )
{
	int index;

	index = 0;
	if (this->_list.size() == this->_N || this->_vector.size() == this->_N)
		throw AddingTooMuchNException();
	while (index < this->_N)
	{
		const int value = rand();
		this->_vector.push_back(value);
		this->_list.push_back(value);
		index++;
	}
	return ;
}

void Span::ShortestSpan( void )
{
	int min;
	int max;
	int soustraction;

	if (this->_list.empty() || this->_vector.empty())
		throw EmptySpan();
	if (this->_list.size() <= 1 || this->_vector.size() <= 1)
		throw EmptySpan();
	min = *std::min_element(this->_vector.begin(), this->_vector.end());
	max = *std::max_element(this->_vector.begin(), this->_vector.end());
	soustraction = max - min;
	
	min = *std::min_element(this->_list.begin(), this->_list.end());
	max = *std::max_element(this->_list.begin(), this->_list.end());
	return ;
}

void Span::LongestSpan( void )
{
	return ;
}

std::ostream & operator<<( std::ostream & o, std::list<int>::iterator i )
{
    o << "\033[1;34mThe list container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}

std::ostream & operator<<( std::ostream & o, std::vector<int>::iterator i )
{
    o << "\033[1;32mThe vector container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}