#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
	std::cout << "\033[1;32mDefault constructor without argument called.\033[0m" << std::endl;
}

Span::Span( unsigned int nb )
{
	if (nb <= 1 || static_cast<int>(nb) < 0)
		throw EmptySpan();
	this->_N = nb;
    std::cout << "\033[1;32mConstructor Span called" << std::endl;
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
    this->_list = rhs._list;
	return (*this);
}

Span::~Span( void )
{
	std::cout << "\033[1;34mDestructor called.\033[0m" << std::endl;
}

void Span::addRandomNumber( void )
{
	unsigned int index;
	unsigned int value;

	index = 0;
	srand(time(NULL));
	while (index < this->_N)
	{
		value = rand();
		this->_list.push_back(value);
		index++;
	}
	return ;
}

void Span::addNumber( int nb )
{
    if (this->_list.size() == this->_N)
        throw AddingTooMuchNException();
    this->_list.push_back(nb);
	return ;
}

int Span::shortestSpan( void )
{	
    int	res;
    int	i;

	if (this->_list.empty())
		throw EmptySpan();
	i = -1;
    res = abs(this->_list[1] - this->_list[0]);
	sort(this->_list.begin(), this->_list.end());
    while (++i < static_cast<int>(this->_list.size()) - 1)
    {
        if (res > abs(this->_list[i] - this->_list[i + 1]))
            res = abs(this->_list[i] - this->_list[i + 1]);
    } 
    return (res);
}

int Span::longestSpan( void )
{
	int min;
	int max;
	int soustraction;

	if (this->_list.empty())
		throw EmptySpan();	
	min = *std::min_element(this->_list.begin(), this->_list.end());
	max = *std::max_element(this->_list.begin(), this->_list.end());
	soustraction = max - min;
	return (soustraction);
}

void Span::DisplayVector( void )
{
	std::vector<int>::iterator i;
	i = this->_list.begin();
	if (this->_list.empty())
		throw EmptySpan();
	while (i != this->_list.end())
    {
        std::cout << i;
        i++;
    }

}

/*std::ostream & operator<<( std::ostream & o, std::list<int>::iterator i )
{
    o << "\033[1;34mThe list container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}*/

std::ostream & operator<<( std::ostream & o, std::vector<int>::iterator i )
{
    o << "\033[1;32mThe vector container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}