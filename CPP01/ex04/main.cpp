/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/09 17:14:27 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


int main(int argc, char **argv)
{
	Sed instance;
	
	if (instance.ft_check_error(argv, argc) == 1)
		return (1);
	else
		instance.ft_replace_file(argv);
    return (0);
}