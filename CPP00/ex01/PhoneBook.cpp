/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/24 19:20:18 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

Contact PhoneBook::register_info(Contact contact)
{
	contact.set_all_info(contact.First_name, contact.Last_name, contact.Nick_name, contact.Phone_number, contact._get_darkest_secret());
	return (contact);
}

void PhoneBook::display_info(Contact contact) const
{
	std::cout << "\033[1;37mFirst name : \033[0m";
	std::cout << contact.First_name << std::endl;
	std::cout << "\033[1;37mLast name : \033[0m";
	std::cout << contact.Last_name << std::endl;
	std::cout << "\033[1;37mNick name name : \033[0m";
	std::cout << contact.Nick_name << std::endl;
	std::cout << "\033[1;37mPhone number : \033[0m";
	std::cout << contact.Phone_number << std::endl;
}

void PhoneBook::display_phone_book(void) const
{
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
}

void PhoneBook::search_contacts(Contact *contact, int index) const
{	
	int i;
	int search;
	std::string tmp;

	i = 0;
	search = 0;
	if (index == 0)
	{
		std::cout << "\033[1;31mError. You don't have enough contact to use that command.\033[0m" << std::endl;
		return ;
	}
	else
	{
		this->display_phone_book();
		while (i < index)
		{
			std::cout << std::setw(10) << i + 1;
			std::cout << "|";
			std::cout << std::setw(10) << contact[i].First_name;
			std::cout << "|";
			std::cout << std::setw(10) << contact[i].Last_name;
			std::cout << "|";
			std::cout << std::setw(10) << contact[i].Nick_name << std::endl;
			i++;
		}
	}
	std::cout << "Please choose the contact you want to see." << std::endl << "> ";
	while (!(std::cin >> search) || (search < 1 || search >= index + 1))
	{
		std::cout << "\033[1;31mError. Adaloui's phonebook™ only contains\033[1;33m " << index << "\033[1;31m contacts.\033[0m" << std::endl;
		std::cout << "\033[1;37mPlease type a number ranging between \033[1;32m1 and " << index << ".\033[0m" << std::endl;
		std::cout << "> ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	std::cout << "First name : " << contact[search - 1].get_firstname() << std::endl;
	std::cout << "Last name : " << contact[search - 1].get_lastname() << std::endl;
	std::cout << "Nickname : " << contact[search - 1].get_nickname() << std::endl;
	std::cout << "Phone number : " << contact[search - 1].get_phonenumber() << std::endl;
	std::cin.ignore(10000, '\n');
}