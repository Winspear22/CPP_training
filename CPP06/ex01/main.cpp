/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:52 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/06 02:09:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main( int argc, char **argv )
{
	(void)argc;
	(void)argv;
	Data		*data = new Data;
	Data		*data_2;
	uintptr_t	i;

	data->str = "Z";
	data->j = 90;
	i = serialize(data);
	data_2 = deserialize(i);
	std::cout << "\033[1;31m==============\033[0m" << std::endl;
    std::cout << "\033[1;33mWHAT YOU TYPED\033[0m" << std::endl;
    std::cout << "\033[1;31m==============\033[0m" << std::endl;
	std::cout << "\033[1;32mstd::string = \033[1;37m" << data->str << "\033[0m" << std::endl;
	std::cout << "\033[1;32mint = \033[1;37m" << data->j << "\033[0m" << std::endl;
   	std::cout << "\033[1;31m=================================\033[0m" << std::endl;
    std::cout << "\033[1;33mADDRESS IN THE UINTPTR_T VARIABLE\033[0m" << std::endl;
    std::cout << "\033[1;31m=================================\033[0m" << std::endl;
    std::cout << "\033[1;34muintptr_t i = \033[1;37m" << i << std::endl;
	std::cout << "\033[1;31m====================================\033[0m" << std::endl;
    std::cout << "\033[1;33mPRODUCT OF THE REINTERPRETATION CAST\033[0m" << std::endl;
    std::cout << "\033[1;31m====================================\033[0m" << std::endl;
	std::cout << "\033[1;32mstd::string = \033[1;37m" << data_2->str << "\033[0m" << std::endl;
	std::cout << "\033[1;32mint = \033[1;37m" << data_2->j << "\033[0m" << std::endl;
   	
	delete data;
    return (SUCCESS);
}