/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:15:54 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/24 18:57:06 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string temp;
	Contact all_contacts[8];
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
				all_contacts[index] = phone.register_info(all_contacts[index]);
				std::cout << "Adaloui's PhoneBook > ";
				index++;
			}
			else if (index == 8)
			{
				if (index_two == 8)
					index_two = 0;
				all_contacts[index_two] = phone.register_info(all_contacts[index_two]);
				std::cout << "Adaloui's PhoneBook > ";
				index_two++;
			}
		}
		else if (temp == "SEARCH")
		{
			std::cout << "Displaying contact number : " << index << std::endl;
			phone.search_contacts(all_contacts, index);
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
			std::cout << "\033[1;31mInvalid command.\033[0m" << std::endl;
			std::cout << "Adaloui's PhoneBook > ";
		}
			
	}
	return (0);
}