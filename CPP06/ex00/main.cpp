/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:00 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 13:06:40 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalaireConversion.hpp"
#include "ConversionToInt.hpp"
#include "ConversionToDouble.hpp"
#include "ConversionToFloat.hpp"
#include "ConversionToChar.hpp"
#include "ConversionToInf.hpp"
#include "ConversionToNaN.hpp"

bool	CheckTypeIdentity( std::string argv )
{
	int i;
	bool (*check_fct[4])(std::string argv) = {CheckCharType, CheckIntType, CheckFloatType, CheckDoubleType};
	void (*write_fct[4])(std::string argv) = {WriteChar, WriteInt, WriteFloat, WriteFloat};
	
	i = -1;
	while (++i < 4)
	{
		if (check_fct[i](argv) == SUCCESS)
		{
			write_fct[i](argv);
			return (SUCCESS);
		}
	}
	return (FAILURE);
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "\033[1;31mError, you need one argument. Ex : ./a.out 42\033[0m" << std::endl;
        return (0);
    }
	std::string str;

	str = argv[1];
	if (CheckTypeIdentity( str ) == SUCCESS)
		return (SUCCESS);
	else if (CheckInf( str ) == SUCCESS)
		WriteInf( str );
	else if (CheckNaN( str ) == SUCCESS)
		WriteNaN();
	else
		std::cout << "\033[1;31mError, you must type a valid type (char, int, float or double).\033[0m" << std::endl;
    return (0);
}