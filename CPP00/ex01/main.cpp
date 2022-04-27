/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:15:54 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 16:28:49 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string temp;
	PhoneBook phone;
	int index;
	int index_two;
	
	std::cout << "\033[1;32mHello and welcome to adaloui's phonebook™.\033[0m" << std::endl;
	std::cout << "Adaloui's PhoneBook > ";
	index = 0;
	index_two = 0;
	while (getline(std::cin, temp))
	{
		if (temp == "ADD")
		{
			if (index < 8)
			{
				phone.all_contacts[index] = phone.register_info(phone.all_contacts[index]);
				std::cout << "Adaloui's PhoneBook > ";
				index++;
			}
			else if (index == 8)
			{
				if (index_two == 8)
					index_two = 0;
				phone.all_contacts[index_two] = phone.register_info(phone.all_contacts[index_two]);
				std::cout << "Adaloui's PhoneBook > ";
				index_two++;
			}
		}
		else if (temp == "SEARCH")
		{
			phone.search_contacts(phone.all_contacts, index);
			std::cout << "Adaloui's PhoneBook > ";
		}
		else if (temp == "EXIT")
		{
			std::cout << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
			return (0);
		}
		else if (temp == "")
			std::cout << "Adaloui's PhoneBook > ";
		else
		{
			std::cout << "\033[1;31mInvalid command. Please try either \033[1;33mADD\033[1;31m, \033[1;33mSEARCH\033[1;31m or \033[1;33mEXIT\033[1;31m.\033[0m" << std::endl;
			std::cout << "Adaloui's PhoneBook > ";
		}
			
	}
	return (0);
}