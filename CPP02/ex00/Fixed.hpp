/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:19:37 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/13 16:29:35 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iomanip>
# include <iostream>

class Fixed
{
public:
    Fixed( void ); 
	Fixed( const Fixed & n );
    ~Fixed( void );

	Fixed & operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int _i;
	static const int _bit = 8;
};

#endif