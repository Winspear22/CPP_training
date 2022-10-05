/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToNaN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:39:50 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 13:06:04 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalaireConversion.hpp"
#include "ConversionToNaN.hpp"

void WriteNaN( void )
{
	std::cout << "\033[1;37mchar: \033[1;31mimpossible\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << "nanf" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << "nan" << "\033[0m" <<  std::endl;
}

bool CheckNaN( std::string argv )
{
	if (argv == "nanf" || argv == "nan" || argv == "NaN")
		return (SUCCESS);
	return (FAILURE);
}
