/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:44:33 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/29 20:06:13 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string original_str = "HI THIS IS BRAIN";
	std::string* stringPTR = &original_str;
	std::string& stringREF = original_str;
	
	std::cout << "The memory address of the string variable = " << &original_str << std::endl;
	std::cout << "The memory address held by stringPTR = " << &(*stringPTR) << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << "The value of the string variable = " << original_str << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	return (0);
}