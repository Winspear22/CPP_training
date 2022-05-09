/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:42:12 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/09 20:07:19 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(void)
{
    return ;
}

Sed::~Sed(void)
{
    return ;
}

int Sed::ft_check_error(char **argv, int argc)
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

int Sed::ft_replace_file(char **argv)
{    
    this->_file_name = argv[1];
	this->_file_name = this->_file_name + ".replace";
	this->_s1 = argv[2];
	this->_s2 = argv[3];
	this->_index = 0;
	this->_chg_msg = 0;
	std::ifstream reading_file(argv[1]);
	std::ofstream writing_file(this->_file_name.c_str());

	getline(reading_file, this->_result);
	while (this->_index < this->_result.length())
	{
		if (this->_result.compare(this->_index, this->_s1.length(), this->_s1) == 0)
		{
			this->_chg_msg = 1;
			this->_result.erase(this->_index, this->_s1.length());
			this->_result.insert(this->_index, this->_s2);
		}
		this->_index++;
	}
	writing_file << this->_result;
	if (this->_chg_msg == 1)
		std::cout << "The character(s) \033[1;33m" << this->_s1 << "\e[39m has successfully been replaced by \033[1;33m" << this->_s2 << "\e[39m" << std::endl;
	else
		std::cout << "\033[1;37mCould not find \033[1;33m" << this->_s1 << ". \033[1;37mCopying \033[1;33m" << argv[1] << "\033[1;37m's content into \033[1;33m" << this->_file_name << std::endl;
	reading_file.close();
	writing_file.close();
    return (0);
}