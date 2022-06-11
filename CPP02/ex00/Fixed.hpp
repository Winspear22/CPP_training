/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:19:37 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/11 12:58:29 by user42           ###   ########.fr       */
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