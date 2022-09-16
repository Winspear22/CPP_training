/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:02 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/16 21:21:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iomanip>
# include <iostream>
# include "Brain.hpp"

class Animal
{
public:
//	Animal( void );
//	Animal( const Animal & copy );
	virtual ~Animal( void );
//	Animal & operator=( Animal const & rhs );

	virtual void makeSound( void ) const = 0;
	std::string getType( void ) const;
	virtual Brain *getBrain(void) const = 0;
	
protected:
	std::string type;
};

#endif