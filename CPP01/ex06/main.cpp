/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:27:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 15:07:05 by adaloui          ###   ########.fr       */
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
        std::cout << "\033[1;31mError. You must have only \033[1;33m2 \033[1;31marguments, you have \033[1;33m" << argc << "\033[1;31m.\e[39m" << std::endl;
    return (0);
}