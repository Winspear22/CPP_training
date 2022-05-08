/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:44:33 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/08 16:52:49 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string original_str = "HI THIS IS BRAIN";
	std::string* stringPTR = &original_str;
	std::string& stringREF = original_str;
	
	std::cout << "\033[1;37mThe \033[1;35mmemory address \033[1;37mof the \033[1;31mstring variable \033[1;37m= \033[1;34m" << &original_str << std::endl;
	std::cout << "\033[1;37mThe \033[1;35mmemory address \033[1;37mheld by \033[1;32mstringPTR \033[1;37m= \033[1;34m" << &(*stringPTR) << std::endl;
	std::cout << "\033[1;37mThe \033[1;35mmemory address \033[1;37mheld by \033[1;33mstringREF \033[1;37m= \033[1;34m" << &stringREF << std::endl;
	std::cout << "\033[1;37mThe \033[1;36mvalue \033[1;37mof the \033[1;31mstring variable \033[1;37m= \033[1;34m" << original_str << std::endl;
	std::cout << "\033[1;37mThe \033[1;36mvalue \033[1;37mpointed to by \033[1;32mstringPTR \033[1;37m= \033[1;34m" << *stringPTR << std::endl;
	std::cout << "\033[1;37mThe \033[1;36mvalue \033[1;37mpointed to by \033[1;33mstringREF \033[1;37m= \033[1;34m" << stringREF << std::endl;
	return (0);
}