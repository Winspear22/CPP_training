/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 15:11:11 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include <cctype>
# include "Contact.hpp"

# define SUCCESS true
# define FAILURE false

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