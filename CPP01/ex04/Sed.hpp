/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:42:26 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/09 17:35:43 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

class Sed
{
public:	
    Sed(void);
    ~Sed(void);

    int ft_check_error(char **argv, int argc);
	int ft_replace_file(char **argv);

private:
	std::string _file_name;
	std::string _s1;
	std::string _s2;
	std::string _result;
	std::size_t _index;
	std::size_t _error;
};

#endif