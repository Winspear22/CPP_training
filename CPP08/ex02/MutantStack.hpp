/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:31:22 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 16:31:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iomanip>
# include <iostream>
# include <algorithm>
# include <stack>
# include <vector>
# include <list>

template <typename T>
class MutantStack: public std::stack <T>
{
public:
    MutantStack<T>( void )
    {
		std::cout << "\033[1;32mMutantStack Constructor Span called" << std::endl;
        return ;
    }
	MutantStack<T>( MutantStack<T> const & copy )
	{
		*this = copy;
		std::cout << "\033[1;36mMutantStack Copy constructor called.\033[0m" << std::endl;

	}
	MutantStack<T> & operator=( const MutantStack<T> & rhs )
	{
		(void)rhs;
		std::cout << "\033[0;34mMutantStack assignment overload operator called.\033[0m" << std::endl;
		return (*this);
	}
    ~MutantStack<T>( void )
	{
		std::cout << "\033[1;34mMutantStack Destructor called.\033[0m" << std::endl;
		return ;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;


	iterator begin( void )
	{
		return (this->c.begin());
	}
	iterator end ( void )
	{
		return (this->c.end());
	}

private:
};

#endif