/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:00 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/06 01:21:51 by user42           ###   ########.fr       */
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


int main(int argc, char **av)
{
    if (argc != 2)
    {
        std::cout << "\033[1;31mError, you need one argument. Ex : ./a.out 42\033[0m" << std::endl;
        return (0);
    }
	std::string argv;
	ScalaireConversion nb(av[1]);
	int i;

	argv = av[1];
	i = SUCCESS;
	try
	{
		nb.FindExceptions();
	}
	catch(const std::exception& e)
	{
		i = FAILURE;
		std::cerr << e.what() << '\n';
	}
	if (i == SUCCESS)
		nb.PrintAllTypes();
    return (0);
}