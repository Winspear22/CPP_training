/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:31:04 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 19:12:21 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    this->_vector = rhs._vector;
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
		this->_vector.push_back(value);
		this->_list.push_back(value);
		index++;
	}
	this->_list.sort();
	return ;
}

void Span::addNumber( int nb )
{
    if (this->_vector.size() == this->_N || this->_list.size() == this->_N)
        throw AddingTooMuchNException();
    this->_vector.push_back(nb);
	this->_list.push_back(nb);
	return ;
}

int Span::shortestSpan( void )
{	
	/*METHOD WITH VECTOR CONTAINER*/
	int ret; // retourne la valeur
	int tmp; // va permettre de determiner si l'ecart entre le chiffre est plus petit que le precedant retenu.
	std::vector<int>::iterator i;

	if (this->_vector.empty() || this->_list.empty())
  		throw EmptySpan();
	tmp = 0;
    ret = abs(this->_vector[1] - this->_vector[0]); // on commence au debut du container e on vacomparer tous les chiffres 1 par 1
	tmp = abs(this->_vector[1] - this->_vector[0]); // pareil
	i = this->_vector.begin();
	sort(this->_vector.begin(), this->_vector.end());
	while (i != this->_vector.end() - 1)
	{
		tmp = abs(*i - *(i + 1)); // on soustrait le premier chiffre et le suivant
		if (ret > tmp) // on voit si ce dernier est plus petit que ret (cad this->_vector[0] et this->_vector[1])
			ret = abs(*i - *(i + 1)); // si oui, on lui donne la nouvelle valeur
		i++;
	}
	/*METHOD WITH LIST CONTAINER */
	int ret_2;
	int tmp_2;
	int first_min;
	int second_min;
	std::list<int>::iterator index;
	std::list<int>::iterator index_2;

	if (this->_vector.empty() || this->_list.empty())
  		throw EmptySpan();
	this->_list.sort();
	index = this->_list.begin();
	index_2 = this->_list.begin();
	first_min = *index;
	index++;
	second_min = *index;
	ret_2 = abs(first_min - second_min);
	tmp_2 = abs(first_min - second_min);
	index--;
	index_2++;
	while (index != this->_list.end())
	{
		tmp_2 = abs(*index - *index_2);//abs(*index - *(index++)); // on soustrait le premier chiffre et le suivant
		if (ret_2 > tmp_2) // on voit si ce dernier est plus petit que ret_2 (cad this->_vector[0] et this->_vector[1])
			ret_2 = abs(*index - *index_2); // si oui, on lui donne la nouvelle valeur
		if (index_2 != this->_list.end())
			index_2++;
		index++;
	}
	std::cout << "\033[1;37mContainer \033[1;32mvector\033[1;37m result for shortestspan : \033[1;35m" << ret << "\033[0m" << std::endl;
	std::cout << "\033[1;37mContainer \033[1;34mlist\033[1;37m result for shortestspan : \033[1;35m" << ret_2 << "\033[0m" << std::endl;
	std::cout << "\033[1;31mEND RESULT \033[1;37mFOR SHORTEST SPAN : \033[1;35m"; 
	return (ret);
}

int Span::longestSpan( void )
{
	/*METHOD WITH VECTOR CONTAINER*/
	int soustraction;
	int min;
	int max;

	if (this->_vector.empty() || this->_list.empty())
		throw EmptySpan();	
	min = *std::min_element(this->_vector.begin(), this->_vector.end());
	max = *std::max_element(this->_vector.begin(), this->_vector.end());
	soustraction = max - min;

	/*METHOD WITH LIST CONTAINER */
	if (this->_vector.empty() || this->_list.empty())
		throw EmptySpan();
	int soustraction_2;
	std::list<int>::iterator min_2;
	std::list<int>::iterator max_2;
	this->_list.sort();
	min_2 = this->_list.begin();
	max_2 = this->_list.end();
	while (min_2 != this->_list.end())
		min_2++;
	max_2 = min_2;
	max_2--;
	min_2++;
	soustraction_2 = *max_2 - *min_2;
	std::cout << "\033[1;37mContainer \033[1;32mvector\033[1;37m returns for longestspan : \033[1;35m" << soustraction << "\033[0m" << std::endl;
	std::cout << "\033[1;37mContainer \033[1;34mlist\033[1;37m returns for longestspan : \033[1;35m" << soustraction_2 << "\033[0m" << std::endl;
	std::cout << "\033[1;31mEND RESULT\033[1;37m FOR LONGEST SPAN : \033[1;35m"; 
	return (soustraction);
}

std::ostream & operator<<( std::ostream & o, std::vector<int>::iterator i )
{
    o << "\033[1;32mThe vector container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}

std::ostream & operator<<( std::ostream & o, std::list<int>::iterator i )
{
    o << "\033[1;34mThe list container content : \033[1;37m" << *i << "\033[0m";
    o << std::endl;
    return (o);
}