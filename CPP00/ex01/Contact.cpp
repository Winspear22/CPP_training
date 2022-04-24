/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:31:02 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/24 18:59:31 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

bool Contact::set_first_name(std::string str)
{
	this->First_name = str;
	return (SUCCESS);
}

bool Contact::set_last_name(std::string str)
{
	this->Last_name = str;
	return (SUCCESS);
}

bool Contact::set_nick_name(std::string str)
{
	this->Nick_name = str;
	return (SUCCESS);
}

bool Contact::set_phone_number(std::string str)
{
	this->Phone_number = str;
	return (SUCCESS);
}

std::string Contact::_get_darkest_secret(void) const
{
	return (this->_Darkest_secret);
}

bool Contact::_set_darkest_secret(std::string _s1)
{
	
	_s1 = this->_get_darkest_secret();
	this->_Darkest_secret = _s1;
	return (SUCCESS);
}

bool Contact::set_all_info(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5)
{
	std::string tmp;
	
	std::cout << "Write first name : ";
	while (getline(std::cin, tmp)) // on met dans une boucle while pour le ctrl + d
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mfirst name : \033[0m";
		}
		else
		{
			s1 = set_first_name(tmp);
			break ;
		}
	}
	std::cout << "Write last name : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mlast name : \033[0m";
		}
		else
		{
			s2 = set_last_name(tmp);
			break ;
		}
	}
	std::cout << "Write nickname : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mnickname : \033[0m";
		}
		else
		{
			s3 = set_nick_name(tmp);
			break ;
		}
	}
	std::cout << "Write phone number : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mphone number : \033[0m";
		}
		else
		{
			s4 = set_phone_number(tmp);
			break ;
		}
	}
	std::cout << "Write darkest secret : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mdarkest secret : \033[0m";
		}
		else
		{
			s5 = _set_darkest_secret(tmp);
			break ;
		}
	}
	std::cout << "\033[1;32mContact successfully added ! :)\033[0m" << std::endl;
	return (SUCCESS);
}
