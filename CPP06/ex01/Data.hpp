/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:48 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/06 01:52:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>
# include <stdint.h>
# include <cstdlib>

# define SUCCESS 0
# define FAILURE 1

typedef struct s_Data
{
	std::string str;
	double j;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif