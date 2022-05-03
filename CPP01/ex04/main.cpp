/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/03 03:16:28 by user42           ###   ########.fr       */
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
    (void)argc;
	char *name;
	Sed str;
	
	if (argc == 4)
	{
		name = ft_strjoin(argv[1], ".replace");
		str.s1 = argv[2];
		str.s2 = argv[3];
		str.size = strlen(argv[2]);
		std::ofstream ofs(name);
		str.ft_replace(str);
		ofs << "coucou les amis" << std::endl;
		ofs.close();
		delete [] name;
	}
	else
		std::cout << "\033[1;31mError. Too much or not enough arguments. You have \033[1;33m" << argc << " \033[1;31myou need \033[1;33m4\033[1;31m.\033[0m" << std::endl;
	
    return (0);
}