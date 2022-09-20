/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:46:21 by adaloui           #+#    #+#             */
/*   Updated: 2022/09/20 11:32:26 by adaloui          ###   ########.fr       */
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

    std::string getIdeas(int i);
	void setIdeas(std::string str, int idea_nb);


private:
    std::string _ideas[100];
};

#endif