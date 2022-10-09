#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
	std::cout << "\033[1;32mDefault constructor without argument called.\033[0m" << std::endl;
}

Span::Span( unsigned int nb )
{
//	if (nb <= 1)
//		throw EmptySpan();
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
    this->_list = rhs._list;

	return (*this);
}

Span::~Span( void )
{
	std::cout << "\033[1;34mDestructor called.\033[0m" << std::endl;
}

void Span::AddNumber( void )
{
	unsigned int index;

	index = 0;
	if (this->_list.size() == this->_N)
		throw AddingTooMuchNException();
	while (index < this->_N)
	{
		const int value = rand();
		this->_list.push_back(value);
		index++;
	}
	return ;
}

int Span::ShortestSpan( void )
{	
/*	unsigned int min;
	std::vector<int> tab(this->_list);
	std::vector<int>::iterator i;
	std::vector<int>::iterator j;

	min = std::numeric_limits<unsigned int>::max();

	if (this->_list.empty())
		throw EmptySpan();
	if (this->_list.size() <= 1)
		throw EmptySpan();
	sort(tab.begin(), tab.end());
	i = tab.begin();
	while (i != tab.end())
	{
		j = i;
		j++;
		i++;
		min = std::min<unsigned int>(std::abs(*i - *j), min);
	}
	return (min);*/

         int                            res = 0;
         int                            i = 0;

        std::sort(this->_list.begin(), this->_list.end());
        res = ::abs(this->_list[1] - this->_list[0]);
		std::cout << "RES = " << res << std::endl;
		std::cout << "RES = " << res << std::endl;
		std::cout << "list = " << this->_list[i] << std::endl;
		std::cout << "list + 1 = " << this->_list[i + 1] << std::endl;
        while (i < static_cast<int>(this->_list.size()) - 1&& i < static_cast<int>(this->_list.size()) - 1)
        {
            if (res > ::abs(this->_list[i] - this->_list[i + 1]))
                res = ::abs(this->_list[i] - this->_list[i + 1]);
					std::cout << "list + 1 = " << this->_list[i + 1] << std::endl;
            i++;
        } 
        return (res);
}

int Span::LongestSpan( void )
{
	int min;
	int max;
	int soustraction;

	if (this->_list.empty())
		throw EmptySpan();
	if (this->_list.size() <= 1)
		throw EmptySpan();
	
	min = *std::min_element(this->_list.begin(), this->_list.end());
	max = *std::max_element(this->_list.begin(), this->_list.end());
	soustraction = max - min;
	return (soustraction);
}

void Span::FillNumbers( void )
{
	unsigned int decompte;

	decompte = 0;
	srand(time(NULL));
	if (this->_list.size() == _N)
        throw AddingTooMuchNException();
	while (decompte < this->_N)
	{
		const int value = rand();
		this->_list.push_back(value);
		decompte++;
	}
}


void Span::DisplayVector( void )
{
	std::vector<int>::iterator i;
	i = this->_list.begin();
	if (this->_list.empty())
	{
		std::cout << "coucou" << std::endl;
	}
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