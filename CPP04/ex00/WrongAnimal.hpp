/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:44:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 13:53:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iomanip>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal( void );
	WrongAnimal( std::string name );
	WrongAnimal( const WrongAnimal & copy );
	~WrongAnimal( void );
	WrongAnimal & operator=( WrongAnimal const & rhs );

	void makeSound(void) const;
    std::string getType( void ) const;

protected:
    std::string type;

};

#endif