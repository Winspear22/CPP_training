/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:55 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 19:03:56 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
		std::cout << "\033[1;31m====================\033[0m" << std::endl;
    	std::cout << "\033[1;37mSHORTEST 1 -> 10 = 9\033[0m" << std::endl;
    	std::cout << "\033[1;31m====================\033[0m" << std::endl;
		std::cout << "\033[1;31m=============================\033[0m" << std::endl;
    	std::cout << "\033[1;37mLONGEST -10000 -> 999 = 10999 \033[0m" << std::endl;
    	std::cout << "\033[1;31m=============================\033[0m" << std::endl;

		Span sp = Span(10);
		sp.addNumber(-100);
		sp.addNumber(-50);
		sp.addNumber(1);
		sp.addNumber(50);
		sp.addNumber(100);
		sp.addNumber(-1000);
		sp.addNumber(-10000);
		sp.addNumber(999);
		sp.addNumber(10);
		sp.addNumber(890);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\033[1;31m======================\033[0m" << std::endl;
    	std::cout << "\033[1;37mSHORTEST 10 -> 20 = 10\033[0m" << std::endl;
    	std::cout << "\033[1;31m======================\033[0m" << std::endl;
		std::cout << "\033[1;31m=======================\033[0m" << std::endl;
    	std::cout << "\033[1;37mLONGEST 90 -> 150 = 140 \033[0m" << std::endl;
    	std::cout << "\033[1;31m=======================\033[0m" << std::endl;

		Span sp = Span(10);
		sp.addNumber(10);
		sp.addNumber(20);
		sp.addNumber(30);
		sp.addNumber(40);
		sp.addNumber(50);
		sp.addNumber(60);
		sp.addNumber(70);
		sp.addNumber(80);
		sp.addNumber(90);
		sp.addNumber(150);
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