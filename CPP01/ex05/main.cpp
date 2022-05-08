/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:13:38 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 19:26:04 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl instance;
	std::string level;
	
	if (argc == 2)
	{
		level = argv[1];
		instance.complain(level);
	}
	else 
	{
		std::cout << "\033[1;31mError, you need to have \033[1;33m2 arguments\033[1;31m, you have \033[1;33m" << argc << std::endl;
		std::cout << "\033[1;37mPlease use either \033[1;33mDEBUG\033[1;37m, \033[1;33mINFO\033[1;37m, \033[1;33mWARNING\033[1;37m or \033[1;33mERROR\033[1;37m." << std::endl;
		return (1);
	}
    return (0);
}