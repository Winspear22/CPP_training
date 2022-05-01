/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/01 17:37:45 by user42           ###   ########.fr       */
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
   // (void)argv;
	/*std::string name;
	std::string replace;
	name = argv[1];
	replace = ".replace";
	std::transform(name.begin(), name.end(), name.begin(), ::tolower);
	name += ".replace";
	std::cout << name;*/
	char *name;
	
	name = ft_strjoin(argv[1], ".replace");
	std::ofstream ofs(name);
//ofs.open(name);
	
	ofs << "coucou les amis" << std::endl;
	ofs.close();
	
//    if (argc > 4 || argc < 4)
  //  {
	//	std::cout << "\033[1;31mError. Wrong number of arguments.\033[0m" << std::endl;
//		return (1);
//	}
	delete [] name;	
    return (0);
}