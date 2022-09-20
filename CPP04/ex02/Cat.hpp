/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:51 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:51:52 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat & copy );
	virtual ~Cat( void );
	Cat & operator=( Cat const & rhs );

	void makeSound(void) const;
	Brain *getBrain(void) const;

private:
	Brain *_Brain;

};

#endif