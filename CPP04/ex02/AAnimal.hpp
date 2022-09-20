/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:02 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:51:27 by adaloui          ###   ########.fr       */
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
	virtual ~Animal( void );

	virtual void makeSound( void ) const = 0;
	std::string getType( void ) const;
	virtual Brain *getBrain(void) const = 0;
	
protected:
	std::string type;
};

#endif