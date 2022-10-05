/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToInt.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:38:56 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:38:57 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionToInt.hpp"

bool CheckIntType( std::string argv )
{
	int i;

	i = -1;
	if (argv.length() <= 1) // comprend le signe, pour ne pas que l'on écrite - ou +
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
			return (FAILURE);
	}
	return (SUCCESS);
}

long long ft_stoi(std::string str)
{
	long long i;
	long long signe;
	long long num;

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

void WriteInt( std::string argv )
{
	int number;
	
	number = ft_stoi( argv );
	if (CheckPrintability(number) == FAILURE)
		; 
	else
		std::cout << "\033[1;37mchar: '\033[1;32m" <<  static_cast<char>(number) << "\033[1;37m'\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;32m" << static_cast<int>(number) << "\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << static_cast<float>(number) << "\033[1;33m.0f\033[0m" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << static_cast<double>(number) << ".0" << "\033[0m" <<  std::endl;
}