/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToDouble.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:38:33 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:38:34 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionToDouble.hpp"

double ft_stod(std::string str)
{
	double i;
	double signe;
	double num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * signe);
}

bool CheckDoubleType( std::string argv )
{
	int i;
	int max_length;
	int point;

	i = -1;
	point = 0;
	max_length = argv.length() - 1;
	if (max_length <= 1) // comprend le signe, pour ne pas que l'on écrite - ou +
		return (FAILURE);
	if (isdigit(argv[0]) == NOT_DIGIT)
	{
		if (argv[0] != '-' && argv[0] != '+')
			return (FAILURE);
		i = 0;
	}
	while (argv[++i])
	{
		if (isdigit(argv[i]) == NOT_DIGIT)
		{
			if (argv[i] != '.')
				return (FAILURE);
			else
			{
				if (point == 1)
					return (FAILURE);
				point = 1;
			}
		}
	}
	return (SUCCESS);
}

#include <stdlib.h>

void WriteDouble( std::string argv )
{
	double number;
	
	//number = ft_stod( argv );
	number = atof(argv.c_str());
	if (CheckPrintability(number) == FAILURE)
		; 
	else
		std::cout << "\033[1;37mchar: '\033[1;32m" <<  static_cast<char>(number) << "\033[1;37m'\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;32m" << static_cast<int>(number) << "\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << static_cast<float>(number) << "\033[1;33mf\033[0m" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << static_cast<double>(number) << "\033[0m" <<  std::endl;
}