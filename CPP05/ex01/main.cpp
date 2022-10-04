/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:35:42 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/04 15:35:45 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	
	Bureaucrat Pierre("Pierre");
	Bureaucrat Paul("Paul");
	Bureaucrat Jacques("Jacques");
	Bureaucrat Franck(Pierre);

	Pierre.setgrade(35);
	Paul.setgrade(1);
	Franck.setgrade(42);
	Jacques = Pierre;

	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING BUREAUCRATS WITH WRONG LEVELS\033[0m" << std::endl;
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
	try
	{
		Bureaucrat Jean("Jean");
		Jean.setgrade(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Jean("Jean");
		Jean.setgrade(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m==================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m==================\033[0m" << std::endl;

	Form papier("Formulaire 1", 45, 90);
	Form papier2("Formulaire 2", 150, 150);
	Form papier4("Formulaire 4", 67, 67);
	Form papier5("Formulaire 5", 1, 1);
	Form papier6(papier);
	
	std::cout << "\033[1;31m================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING FORMS WITH WRONG LEVELS\033[0m" << std::endl;
	std::cout << "\033[1;31m================================\033[0m" << std::endl;
	try
	{
		Form papier7("Formulaire 7", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form papier7("Formulaire 7", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		try
	{
		Form papier7("Formulaire 7", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form papier7("Formulaire 7", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Franck << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << papier << std::endl;
	std::cout << papier2 << std::endl;
	std::cout << papier4 << std::endl;
	std::cout << papier5 << std::endl;
	std::cout << papier6 << std::endl;
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	std::cout << "\033[1;36mSETTING JACQUES'S GRADE TO 150\033[0m" << std::endl;
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	try
	{ 
		Jacques.setgrade(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Jacques << std::endl;

	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN WITH THE WRONG LEVEL\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	try
	{
		Pierre.signForm(papier5);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN WITH THE RIGHT LEVEL\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	
	try
	{
		Pierre.signForm(papier);
		Jacques.signForm(papier2);
		Paul.signForm(papier5);
		Franck.signForm(papier4);
		Paul.signForm(papier6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN SEVERAL TIMES\033[0m" << std::endl;
	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	try
	{
		Pierre.signForm(papier);
		Jacques.signForm(papier2);
		Paul.signForm(papier5);
		Franck.signForm(papier4);
		Paul.signForm(papier6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << papier << std::endl;
	std::cout << papier2 << std::endl;
	std::cout << papier4 << std::endl;
	std::cout << papier5 << std::endl;
	std::cout << papier6 << std::endl;
    return (0);
}