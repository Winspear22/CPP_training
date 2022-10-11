/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:55 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 16:30:56 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*int main( void )
{
    try
    {
		Span my_span(2000);
		my_span.AddNumber();
		my_span.DisplayVector();
		std::cout << my_span.ShortestSpan() << std::endl;
       	std::cout << my_span.LongestSpan() << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}*/

int main()
{
	std::cout << "\033[1;31m=================\033[0m" << std::endl;
    std::cout << "\033[1;33mSUBJECT MAIN TEST\033[0m" << std::endl;
    std::cout << "\033[1;31m=================\033[0m" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m==================\033[0m" << std::endl;
    std::cout << "\033[1;33mTWO OTHER EXEMPLES\033[0m" << std::endl;
    std::cout << "\033[1;31m==================\033[0m" << std::endl;
	try
	{
		Span sp = Span(10);
		sp.addNumber(8);
		sp.addNumber(12);
		sp.addNumber(17);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(88);
		sp.addNumber(3);
		sp.addNumber(65);
		sp.addNumber(565);
		sp.addNumber(1452);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(10);
		sp.addNumber(6);
		sp.addNumber(16);
		sp.addNumber(17);
		sp.addNumber(44);
		sp.addNumber(11);
		sp.addNumber(678);
		sp.addNumber(-16);
		sp.addNumber(22);
		sp.addNumber(44);
		sp.addNumber(14);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    std::cout << "\033[1;33mPUTTING 20000 NUMBERS IN THE CONTAINER\033[0m" << std::endl;
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
	try
	{
		Span sp = Span(20000);
		sp.addRandomNumber();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m=========================================================\033[0m" << std::endl;
    std::cout << "\033[1;33mTRYING TO ADD MORE NUMBERS THAN THE SIZE OF THE CONTAINER\033[0m" << std::endl;
    std::cout << "\033[1;31m=========================================================\033[0m" << std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m==========================================\033[0m" << std::endl;
    std::cout << "\033[1;33mTRYING TO CREATE A CONTAINER WITH ONE CELL\033[0m" << std::endl;
    std::cout << "\033[1;31m==========================================\033[0m" << std::endl;

	try
	{
		Span sp = Span(1);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m====================================\033[0m" << std::endl;
    std::cout << "\033[1;33mTRYING TO DISPLAY AN EMPTY CONTAINER\033[0m" << std::endl;
    std::cout << "\033[1;31m====================================\033[0m" << std::endl;

	try
	{
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}