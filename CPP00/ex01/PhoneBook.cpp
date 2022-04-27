/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:32 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 16:20:47 by adaloui          ###   ########.fr       */
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

std::string PhoneBook::_ft_append_string(std::string str)
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

bool PhoneBook::_ft_isalpha(std::string str) const
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
			return (SUCCESS);
		i++;
	}
	return (FAILURE);
}

int PhoneBook::_ft_stoi(std::string str) const
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

bool PhoneBook::_pick_contact_nb(int search, int index, Contact *contact)
{
	std::string tmp;
	
	while (getline(std::cin, tmp))
	{
		if (tmp == "")
			std::cout << "> ";
		else if (this->_ft_isalpha(tmp) == FAILURE)
		{
			search = this->_ft_stoi(tmp);
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
	if (tmp == "")
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	else
		this->_display_info(contact, search);
	return (SUCCESS);
}

void PhoneBook::_display_info(Contact *contact, int search) const
{
	std::cout << "First name : " << contact[search - 1].get_first_name() << std::endl;
	std::cout << "Last name : " << contact[search - 1].get_last_name() << std::endl;
	std::cout << "Nickname : " << contact[search - 1].get_nickname() << std::endl;
	std::cout << "Phone number : " << contact[search - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << contact[search - 1].get_darkest_secret() << std::endl;
}

void PhoneBook::_display_phone_book(void) const
{
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

}

void PhoneBook::_display_contacts_in_pb(int index, Contact *contact)
{
	int i;

	i = 0;
	while (i < index)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << this->_ft_append_string(contact[i].get_first_name());
		std::cout << "|";
		std::cout << std::setw(10) << this->_ft_append_string(contact[i].get_last_name());
		std::cout << "|";
		std::cout << std::setw(10) << this->_ft_append_string(contact[i].get_nickname()) << std::endl;
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
		this->_display_phone_book();
		this->_display_contacts_in_pb(index, contact);
	}
	std::cout << "Please choose the contact you want to see." << std::endl << "> ";
	this->_pick_contact_nb(search, index, contact);
}