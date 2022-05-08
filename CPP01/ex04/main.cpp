/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:02:39 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 20:55:07 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

int ft_check_argv_errors(char **argv, int argc)
{
	std::string is_empty;
	std::string argv2;
	std::string argv3;

	if (argc != 4)
	{
		std::cout << "\033[1;31mError. Too much or not enough arguments. You have \033[1;33m" << argc << " \033[1;31myou need \033[1;33m4\033[1;31m.\033[0m" << std::endl;
		return (1);
	}
	std::ifstream file_test(argv[1]);
	if (!file_test)
	{
		file_test.close();
		std::cout << "\033[1;31mError. Cannot open the file \033[1;33m" << argv[1] << "\033[1;31m. Please create it with the command \033[1;33mtouch " << argv[1] << "\033[1;31m or give it the \033[1;33mappropriate rights\033[1;31m before using \033[1;33msed_is_for_losers\033[1;31m.\033[0m" << std::endl;
		return (1);
	}
	getline(file_test, is_empty);
	if (is_empty.length() == 0)
	{
		file_test.close();
		std::cout << "\033[1;31mError. The file \033[1;33m" << argv[1] << " \033[1;31mcannot be empty. Please, \033[1;33mfill it with something.\033[0m" << std::endl;
		return (1);
	}
	file_test.close();
	argv2 = argv[2];
	argv3 = argv[3];
	if (argv2.length() == 0)
	{
		std::cout << "\033[1;31mError, you cannot have \033[1;33m" << "argv[2]" << " \033[1;31mempty." << std::endl;
		return (1);
	}
	if (argv3.length() == 0)
	{
		std::cout << "\033[1;31mError, you cannot have \033[1;33m" << "argv[3]" << " \033[1;31mempty." << std::endl;
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	std::string file_name;
	std::string s1;
	std::string s2;
	std::string tmp;
	std::string tmp_2;
	std::string tmp_3;
	std::string is_empty;
	std::size_t index;
	std::size_t error;
	
	error = std::string::npos;
	if (ft_check_argv_errors(argv, argc) == 1)
		return (1);
	else
	{
		file_name = argv[1];
		file_name = file_name + ".replace";
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream reading_file(argv[1]);
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
				std::cout << index << std::endl;
				if (index == error)
					break ;
				else 
				{
					tmp_2 = tmp.substr(0, index);
				//	std::cout << "tmp.substr = " << tmp.substr(0, index) << std::endl;
				//	std::cout << "tmp_2 = " << tmp_2 << std::endl;
					tmp_2 = tmp_2 + s2;
				//	std::cout << "tmp_2 = " << tmp_2 << std::endl;
					tmp_3 = tmp.substr(index + s1.length(), tmp.length());
					//std::cout << "index + s1 lengt " << index + s1.length() << std::endl;
					//std::cout << "index = " << index << " s1 " << s1.length() << std::endl;
					//std::cout << "tmp length " << tmp.length() << std::endl;
					//std::cout << "tmp_3 = " << tmp_3 << std::endl;
					tmp = tmp_2 + tmp_3;
					//std::cout << "final tmp = " << tmp;
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