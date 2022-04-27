/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:07:43 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 16:22:30 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

class Contact
{
public:

	Contact(void);
	~Contact(void);

	std::string get_darkest_secret(void) const;
	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_phone_number(void) const;
	bool set_all_info(void);
private:	
	std::string _First_name;
	std::string _Last_name;
	std::string _Nick_name;
	std::string _Phone_number;
	std::string _Darkest_secret;

	bool ft_isdigit(std::string str) const;
	bool _ft_isalpha(std::string str) const;

	bool set_first_name(std::string str);
	bool set_last_name(std::string str);
	bool set_nickname(std::string str);
	bool set_phone_number(std::string str);
	bool set_darkest_secret(std::string _s1);
};

#endif