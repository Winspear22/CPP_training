/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/25 20:08:03 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include <cctype>

# define SUCCESS true
# define FAILURE false

class Contact
{
public:

	Contact(void);
	~Contact(void);

	bool ft_isdigit(std::string str) const;
	bool ft_isalpha(std::string str) const;

	std::string get_darkest_secret(void) const;
	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_phone_number(void) const;
	bool set_all_info(void);
	bool set_first_name(std::string str);
	bool set_last_name(std::string str);
	bool set_nickname(std::string str);
	bool set_phone_number(std::string str);
	bool set_darkest_secret(std::string _s1);


private:
	std::string _First_name;
	std::string _Last_name;
	std::string _Nick_name;
	std::string _Phone_number;
	std::string _Darkest_secret;
};

class PhoneBook
{
public:
	Contact all_contacts[8];
	
	PhoneBook(void);
	~PhoneBook(void);

	Contact register_info(Contact contact_tab);
	
	std::string ft_append_string(std::string str);
	int ft_stoi(std::string str) const;
	bool ft_isalpha(std::string str) const;
	void search_contacts(Contact *contact, int index);
	void display_phone_book(void) const;
	void display_contacts_in_pb(int index, Contact *contact);
	void display_info(Contact *contact, int i) const;
	bool pick_contact_nb(int search, int index, Contact *contact);

};

#endif