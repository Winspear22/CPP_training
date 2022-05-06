/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/06 20:17:31 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <wait.h>

	//	if (s1.length() == 1 && s2.length() >= 2)/* permet de pas tomber dans l'erreur p po --> infinite loop*/
	//	{
	//		one = s1.begin();
	//		two = s2.begin(); /*les iterateur nous donnent la premiere lettre de chq string que l'on compare apres avoir mesurer leur longueur*/
	//		if (*one == *two) /*on met * car il faut un pointeur*/
	//		{
	//			std::cout << "\033[1;31mError. Risks of infinite loop." << std::endl;
	//			return (1);
	//		}
	//	}

int ft_check_errors(char *argv1)
{
	if (argc != 4)
	{
		std::cout << "\033[1;31mError. Too much or not enough arguments. You have \033[1;33m" << argc << " \033[1;31myou need \033[1;33m4\033[1;31m.\033[0m" << std::endl;
		return (1);
	}
	std::ifstream reading_file(argv1);
	if (!reading_file)
	{
		std::cout << "\033[1;31mError. Cannot open the file \033[1;33m" << argv[1] << "\033[1;31m. Please create it with the command \033[1;33mtouch " << argv[1] << "\033[1;31m or give it the \033[1;33mappropriate rights\033[1;31m before using \033[1;33msed_is_for_losers\033[1;31m.\033[0m" << std::endl;
		return (1);
	}
}

int main(int argc, char **argv)
{
	std::string file_name;
	std::string s1;
	std::string s2;
	std::string tmp;
	std::string tmp_2;
	std::string tmp_3;	
	std::size_t index;
	std::size_t error;
	std::string::iterator one;
	std::string::iterator two;
	
	file_name = argv[1];
	file_name = file_name + ".replace";
	s1 = argv[2];
	s2 = argv[3];
	error = std::string::npos;
	
	if (ft_check_errors(argv[1]) == 1)
		return (1);
	else
	{
		std::ifstream reading_file(argv[1]);
		if (!reading_file)
		{
			std::cout << "\033[1;31mError. Cannot open the file \033[1;33m" << argv[1] << "\033[1;31m. Please create it with the command \033[1;33mtouch " << argv[1] << "\033[1;31m or give it the \033[1;33mappropriate rights\033[1;31m before using \033[1;33msed_is_for_losers\033[1;31m.\033[0m" << std::endl;
			return (1);
		}
		std::ofstream	writing_file(file_name.c_str()); // on utilise c_str pour convertir le string en char *.
		if (s1 == s2)
		{
			while(getline(reading_file, tmp)) // on ne peut pas faire tmp = reading file, car ifstream != string. Donc on utilise un getline.
				writing_file << tmp;
			reading_file.close();
			writing_file.close();
			std::cout << "The character(s) \033[1;33m" << s1 << "\e[39m has successfully been replaced by \033[1;33m" << s2 << "\e[39m" << std::endl;
			return (0);
		}
		while (getline(reading_file, tmp))
		{
			while (1) // boucle pour remplacer TOUTES les occurences, pa juste la premiere.
			{
				index = tmp.find(s1); // lorsqu'on atteint la find de la string, find renvoit npos, donc on break
				if (index == error)
					break ;
				else 
				{
					tmp_2 = tmp.substr(0, index);
					tmp_2 = tmp_2 + s2;
					tmp_3 = tmp.substr(index + s1.length(), tmp.length());
					tmp = tmp_2 + tmp_3;
				}
			}
			writing_file << tmp;
		}
		std::cout << "The character(s) \033[1;33m" << s1 << "\e[39m has successfully been replaced by \033[1;33m" << s2 << "\e[39m" << std::endl;
		reading_file.close();
		writing_file.close();
	}
    return (0);
}