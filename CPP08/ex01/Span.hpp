#ifndef SPAN_HPP
# define SPAN_HPP

# include <iomanip>
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <stdexcept>
# include <cstdlib>
# include <limits>

class Span
{
public:
	Span( unsigned int N );
	Span( const Span & Copy);
	~Span( void );
	Span &operator=(Span const &rhs);

	void AddNumber( void );
	int  ShortestSpan( void );
	int  LongestSpan( void );
	void DisplayVector( void );
	void FillNumbers( void );

private:
	Span( void );
    std::vector<int> _list;


	unsigned int _N;

	class AddingTooMuchNException : public std::exception
	{
    	virtual const char *what() const throw()
		{
        	return ("\033[1;31mError, could not add more N.\033[0m");
    	}
	};
	class EmptySpan : public std::exception
	{
    	virtual const char *what() const throw()
		{
        	return ("\033[1;31mError, the container is empty or too small.\033[0m");
    	}
	};
	class NumberNotFound : public std::exception
	{
    	virtual const char *what() const throw()
		{
        	return ("\033[1;31mError, the number you were looking for could not be found.\033[0m");
    	}
	};
};

//std::ostream & operator<<( std::ostream & o, std::list<int>::iterator i );
std::ostream & operator<<( std::ostream & o, std::vector<int>::iterator i );


#endif