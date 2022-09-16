/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:37 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/07 16:19:04 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog & copy );
	virtual ~Dog( void );
	Dog & operator=( Dog const & rhs );

	void makeSound( void ) const;
	Brain *getBrain(void) const;

private:
	Brain *_Brain;
};

#endif