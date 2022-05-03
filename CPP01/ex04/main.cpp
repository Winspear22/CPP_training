/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/03 19:35:38 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

char *ft_strjoin(const char *s1, const char *s2)
{
	int i;
	int j;
	char *str;

	if (s1 && s2)
	{
		i = strlen(s1);
		j = strlen(s2);
		str = new char[i + j + 1];
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		j = -1;	
		while (s2[++j])
		{
			str[i] = s2[j];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	std::string file_name;
	std::string popo;
	std::ifstream stdin(argv[1]);
	
	file_name = argv[1];
	file_name = file_name + ".replace";
	if (argc != 4)
		std::cout << "\033[1;31mError. Too much or not enough arguments. You have \033[1;33m" << argc << " \033[1;31myou need \033[1;33m4\033[1;31m.\033[0m" << std::endl;
	if (!stdin)
		std::cout << "\033[1;31mError. Cannoy open the file \033[1;33m" << argv[1] << "\033[1;31m. Please create it before using \033[1;33msed_is_for_losers\033[1;31m.\033[0m" << std::endl;
	popo = file_name.c_str();
	std::cout << file_name << std::endl;
	std::cout << "popo " << popo;
    return (0);
}