/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:15:40 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/13 16:19:35 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:
    Point( void );
    ~Point( void );
    
private:
    Fixed _x( void ) const;
    Fixed _y( void ) const;
};

#endif
