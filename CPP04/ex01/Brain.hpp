/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:46:21 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/06 18:49:31 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIN_CPP

# include <iomanip>
# include <iostream>

class Brain
{
public:
	Brain( void );
	Brain( const Brain & copy );
	~Brain( void );
	Brain & operator=( Brain const & rhs );

private:
    std::string _ideas[100];
};

#endif