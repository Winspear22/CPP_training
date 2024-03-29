/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:35 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 16:30:36 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iomanip>
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <deque>
# include <stdexcept>

class CouldNotFindIntException : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("\033[1;31mError, could not find any corresponding value.\033[0m");
    }
};

template <typename T>
typename T::iterator easyfind( T &tab, int nb )
{
	typename T::iterator i;

	i = find(tab.begin(), tab.end(), nb);
	if (i == tab.end())
		throw CouldNotFindIntException();
	else
		std::cout << "\033[1;31mNumber found ! It was : \033[1;37m" << *i << "\033[0m" << std::endl;
    return (i);
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

std::ostream & operator<<( std::ostream & o, std::deque<int>::iterator i )
{
    o << "\033[1;33mThe deque container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}

#endif