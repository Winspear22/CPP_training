/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:38:51 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 13:00:08 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( std::string name );
	Cat( const Cat & copy );
	~Cat( void );
	Cat & operator=( Cat const & rhs );

	void makeSound(void) const;

};

#endif