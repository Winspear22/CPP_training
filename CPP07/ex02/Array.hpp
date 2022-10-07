#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iomanip>
# include <iostream>
# include <cstdlib>

# define I_WAS_ALLOCATED 1
# define I_WAS_NOT_ALLOCATED 0

template<typename T>
class Array
{
public:
	Array<T>( void )
	{
		std::cout << "\033[1;32mArray Default constructor without argument called.\033[0m" << std::endl;
		this->_size = 0;
		this->_tab = NULL;
		this->is_used = I_WAS_NOT_ALLOCATED;
		return ;
	};
	Array<T> ( const unsigned int n )
	{
		if (n < 0)
			throw Array::NegativeTabException(); 
		std::cout << "\033[1;32mArray Default constructor with argument called.\033[0m" << std::endl;
		this->_size = n;
		if (n > 0)
		{
			this->_tab = new T[n];
			this->is_used = I_WAS_ALLOCATED;
		}
		return ;
	};
	Array<T>( Array<T> const & copy )
	{
		this->is_used = I_WAS_NOT_ALLOCATED;
		std::cout << "\033[1;36mArray Copy constructor called.\033[0m" << std::endl;
		*this = copy;
	}
	~Array<T>( void )
	{
		std::cout << "\033[1;34mArray Destructor called.\033[0m" << std::endl;
		if (this->_size > 0)
			delete [] this->_tab;	
	};
	T & operator []( unsigned int rhs )
	{
		if (rhs >= this->_size || rhs < 0)
			throw Array::NegativeTabException();
		return (this->_tab[rhs]);
	};
	Array<T> & operator=( const Array<T> & rhs )
	{
		std::cout << "\033[0;34mArray assignment overload operator called.\033[0m" << std::endl;
		if (this == &rhs)
			return (*this);
		this->_size = rhs.size();

		if (this->is_used == I_WAS_NOT_ALLOCATED)
		{
			this->_tab = new T[this->size()];
			for (size_t i = 0; i < this->_size; i++)
				this->_tab[i] = rhs._tab[i];
			return (*this);
		}
		else
		{
			for (size_t i = 0; i < this->_size; i++)
				this->_tab[i] = rhs._tab[i];
			return (*this);
		}
	};
	unsigned int size( void ) const
	{
		return (this->_size);
	};
private:
	unsigned int _size;
	T			*_tab;
	int			is_used;

	class NegativeTabException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. You cannot create, display access an array outside of its memory allocated.\033[0m");
			};
	};
};

#endif