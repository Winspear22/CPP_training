/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:31:02 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/25 19:21:33 by adaloui          ###   ########.fr       */
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

bool Contact::ft_isalpha(std::string str) const
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

bool Contact::set_first_name(std::string tmp)
{
	std::cout << "Write first name : ";
	while (getline(std::cin, tmp)) // on met dans une boucle while pour le ctrl + d
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mfirst name : \033[0m";
		}
		else if (this->ft_isalpha(tmp) == FAILURE)
		{
			std::cout << "\033[1;31mError. You cannot use characters other than letters\n\033[0m";
			std::cout << "Please type your \033[1;37mfirst name with letters : \033[0m";
		}
		else
		{
			this->First_name = tmp;
			break ;
		}
	}
	if (this->First_name.length() == 0)
		return (FAILURE);
	return (SUCCESS);
}

bool Contact::set_last_name(std::string tmp)
{
	std::cout << "Write last name : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mlast name : \033[0m";
		}
		else if (this->ft_isalpha(tmp) == FAILURE)
		{
			std::cout << "\033[1;31mError. You cannot use characters other than letters\n\033[0m";
			std::cout << "Please type your \033[1;37mlast name with letters : \033[0m";
		}
		else
		{
			this->Last_name = tmp;
			break ;
		}
	}
	if (this->Last_name.length() == 0)
		return (FAILURE);
	return (SUCCESS);
}

bool Contact::set_nick_name(std::string tmp)
{
	std::cout << "Write nickname : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mnickname : \033[0m";
		}
		else if (this->ft_isalpha(tmp) == FAILURE)
		{
			std::cout << "\033[1;31mError. You cannot use characters other than letters\n\033[0m";
			std::cout << "Please type your \033[1;37mnickname with letters : \033[0m";
		}
		else
		{
			this->Nick_name = tmp;
			break ;
		}
	}
	if (this->Nick_name.length() == 0)
		return (FAILURE);
	return (SUCCESS);
}

bool Contact::ft_isdigit(std::string str) const
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

bool Contact::set_phone_number(std::string tmp)
{
	std::cout << "Write phone number : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mphone number : \033[0m";
		}
		else if (this->ft_isdigit(tmp) == FAILURE)
		{
			std::cout << "\033[1;31mError. You cannot use characters other than numbers\n\033[0m";
			std::cout << "Please type your \033[1;37mphone number with numbers : \033[0m";
		}
		else
		{
			this->Phone_number = tmp;
			break ;
		}
	}
	if (this->Phone_number.length() == 0)
		return (FAILURE);
	return (SUCCESS);
}

std::string Contact::_get_darkest_secret(void) const
{
	return (this->_Darkest_secret);
}

bool Contact::_set_darkest_secret(std::string tmp)
{
	
	tmp = this->_get_darkest_secret();
	std::cout << "Write darkest secret : ";
	while (getline(std::cin, tmp))
	{
		if (tmp.empty() == SUCCESS)
		{
			std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
			std::cout << "Please type your \033[1;37mdarkest secret : \033[0m";
		}
		else if (this->ft_isalpha(tmp) == FAILURE)
		{
			std::cout << "\033[1;31mError. You cannot use characters other than letters\n\033[0m";
			std::cout << "Please type your \033[1;37mdarkest with letters : \033[0m";
		}
		else
		{
			this->_Darkest_secret = tmp;
			break ;
		}
	}
	if (this->_Darkest_secret.length() == 0)
		return (FAILURE);
	return (SUCCESS);
}

bool Contact::set_all_info(void)
{
	std::string tmp;
	
	if (!this->set_first_name(tmp))
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	if (!this->set_last_name(tmp))
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	if (!this->set_nick_name(tmp))
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	if (!this->set_phone_number(tmp))
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	if (!this->_set_darkest_secret(tmp))
	{
		std::cout << std::endl << "\033[1;33mSee you later in Adaloui's phonebook™!\033[0m" << std::endl;
		exit(0);
	}
	std::cout << "\033[1;32mContact successfully added ! :)\033[0m" << std::endl;
	return (SUCCESS);
}
