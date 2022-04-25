/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/25 19:08:36 by adaloui          ###   ########.fr       */
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

std::string PhoneBook::ft_append_string(std::string str)
{
	if (str.length() >= 10)
		str = str.substr(0, 9).append(".");
	return (str);
}

Contact PhoneBook::register_info(Contact contact)
{
	contact.set_all_info();
	return (contact);
}

bool PhoneBook::ft_isalpha(std::string str) const
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (SUCCESS);
		i++;
	}
	return (FAILURE);
}

int PhoneBook::ft_stoi(std::string str) const
{
	int i;
	int signe;
	int num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * signe);
}

void PhoneBook::display_info(Contact *contact, int search) const
{
	std::cout << "First name : " << contact[search - 1].First_name << std::endl;
	std::cout << "Last name : " << contact[search - 1].Last_name << std::endl;
	std::cout << "Nickname : " << contact[search - 1].Nick_name << std::endl;
	std::cout << "Phone number : " << contact[search - 1].Phone_number << std::endl;
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

void PhoneBook::display_contacts_in_pb(int index, Contact *contact)
{
	int i;

	i = 0;
	while (i < index)
		{
			std::cout << std::setw(10) << i + 1;
			std::cout << "|";
			std::cout << std::setw(10) << this->ft_append_string(contact[i].First_name);
			std::cout << "|";
			std::cout << std::setw(10) << this->ft_append_string(contact[i].Last_name);;
			std::cout << "|";
			std::cout << std::setw(10) << this->ft_append_string(contact[i].Nick_name) << std::endl;
			i++;
		}
}

void PhoneBook::search_contacts(Contact *contact, int index)
{	
	int search;
	std::string tmp;

	search = 0;
	if (index == 0)
	{
		std::cout << "\033[1;31mError. You don't have enough contact to use that command.\033[0m" << std::endl;
		return ;
	}
	else
	{
		this->display_phone_book();
		this->display_contacts_in_pb(index, contact);
	}
	std::cout << "Please choose the contact you want to see." << std::endl << "> ";
	while (getline(std::cin, tmp))
	{
		if (tmp == "")
			std::cout << "> ";
		else if (this->ft_isalpha(tmp) == FAILURE)
		{
			search = this->ft_stoi(tmp);
			if (search < 1 || search >= index + 1)
			{
				std::cout << "\033[1;31mError. Adaloui's phonebook™ only contains\033[1;33m " << index << "\033[1;31m contacts.\033[0m" << std::endl;
				std::cout << "\033[1;37mPlease type a number ranging between \033[1;32m1 and " << index << ".\033[0m" << std::endl;
				std::cout << "> ";
			}
			else
				break ;
		}
		else
		{
			std::cout << "\033[1;31mError. Adaloui's phonebook™ only contains\033[1;33m " << index << "\033[1;31m contacts.\033[0m" << std::endl;
			std::cout << "\033[1;37mPlease type a number ranging between \033[1;32m1 and " << index << ".\033[0m" << std::endl;
			std::cout << "> ";
		}
	}
	this->display_info(contact, search);
}