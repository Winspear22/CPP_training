/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToInf.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:38:49 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:38:50 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalaireConversion.hpp"
#include "ConversionToInf.hpp"

void WriteInf( std::string argv )
{
	if (!argv.find('-', 0))
	{
		std::cout << "\033[1;37mchar: \033[1;31mimpossible\033[0m" << std::endl;
		std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
		std::cout << "\033[1;37mfloat: \033[1;32m" << "-inff" << std::endl;
		std::cout << "\033[1;37mdouble: \033[1;32m" << "-inf" << "\033[0m" <<  std::endl;
	}
	else
	{
		std::cout << "\033[1;37mchar: \033[1;31mimpossible\033[0m" << std::endl;
		std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
		std::cout << "\033[1;37mfloat: \033[1;32m" << "inff" << std::endl;
		std::cout << "\033[1;37mdouble: \033[1;32m" << "inf" << "\033[0m" <<  std::endl;
	}	
}

bool CheckInf( std::string popo )
{
	if (popo == "inf" || popo == "-inf" || popo == "+inf")
		return (SUCCESS);
	else if (popo == "inff" || popo == "-inff" || popo == "+inff")
		return (SUCCESS);
	return (FAILURE);
}