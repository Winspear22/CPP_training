/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:34:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/03 16:56:42 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			j = 0;
			if ((i < argc - 1 && argv[i][0] == ' '))
				j++;
			while (argv[i][j])
			{
				std::cout << ft_toupper(argv[i][j]);
				j++;
			}
			if (i < argc - 1 && argv[i][j - 1] == ' ')
				std::cout << "";
			else
				std::cout << " ";
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}