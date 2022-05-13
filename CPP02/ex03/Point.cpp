/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:15:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/13 16:39:18 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void )
{
    this->_x() = 0;
    this->_y() = 0;
    return ;
}

Point::Point( const float x, const float y)
{
    int power;
    
    power = ft_pow(2, this->_bit);	
	this->_x = roundf(x * power);
    this->_y = roundf(y * power);
	return ;
}

Point::~Point( void )
{
    return ;
}
