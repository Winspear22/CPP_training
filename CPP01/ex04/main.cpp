/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/01 15:57:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    (void)argc;
   // (void)argv;
	std::string name;
	name = argv[1];
	name += ".replace";
	std::ofstream ofs("salut");
	
	ofs << "coucou les amis" << std::endl;
	ofs.close();
	
    /*if (argc > 4 || argc < 4)
    {
		std::cout << "\033[1;31mError. Wrong number of arguments.\033[0m" << std::endl;
		return (1);
	}*/
    return (0);
}