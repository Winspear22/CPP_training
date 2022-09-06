/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:02 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 18:38:02 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iomanip>
# include <iostream>

class Animal
{
public:
	Animal( void );
	Animal( const Animal & copy );
	virtual ~Animal( void );
	Animal & operator=( Animal const & rhs );

	virtual void makeSound( void ) const;
	std::string getType( void ) const;
	
protected:
	std::string type;
};

#endif