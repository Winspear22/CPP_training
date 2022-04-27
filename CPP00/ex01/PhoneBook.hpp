/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:36 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 15:35:36 by adaloui          ###   ########.fr       */
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
	void search_contacts(Contact *contact, int index);

private:
	std::string _ft_append_string(std::string str);
	int _ft_stoi(std::string str) const;
	bool _ft_isalpha(std::string str) const;
	void _display_phone_book(void) const;
	void _display_contacts_in_pb(int index, Contact *contact);
	void _display_info(Contact *contact, int i) const;
	bool _pick_contact_nb(int search, int index, Contact *contact);

};

#endif