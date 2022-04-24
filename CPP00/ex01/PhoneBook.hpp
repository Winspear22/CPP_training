/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/24 19:08:41 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>

# define SUCCESS true
# define FAILURE false

class Contact
{
public:
	std::string First_name;
	std::string Last_name;
	std::string Nick_name;
	std::string Phone_number;

	Contact(void);
	~Contact(void);

	std::string _get_darkest_secret(void) const;

	bool set_first_name(std::string str);
	bool set_last_name(std::string str);
	bool set_nick_name(std::string str);
	bool set_phone_number(std::string str);
	bool set_all_info(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5);

private:
	std::string _Darkest_secret;
	bool _set_darkest_secret(std::string _s1);
};

class PhoneBook
{
public:
	Contact contact_tab[8];
	
	PhoneBook(void);
	~PhoneBook(void);

	Contact register_info(Contact contact_tab);
	
	void search_contacts(Contact *contact, int index) const;
	void display_phone_book(void) const; 

	void display_info(Contact contact) const;

};

#endif