/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:48 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:40:49 by adaloui          ###   ########.fr       */
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
	int j;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif