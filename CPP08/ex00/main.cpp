/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:30:30 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/11 16:30:31 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{

    try
    {
        std::cout << "\033[1;31m============================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE CONTAINER WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m============================================================\033[0m" << std::endl;

        std::list<int> tab;
		std::vector<int> tab_2;
		std::deque<int> tab_3;
		std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE ITERATOR WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;

        std::list<int>::iterator i;
        std::vector<int>::iterator j;
		std::deque<int>::iterator k;


        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;
        std::cout << "\033[1;33mADDING TWO SETS OF 5 NUMBERS TO THE CONTAINERS\033[0m" << std::endl;
        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;

        tab.push_back(5);
        tab.push_back(12);
        tab.push_back(17);
        tab.push_back(-636);
        tab.push_back(33);
        tab_2.push_back(74);
		tab_2.push_back(25);
        tab_2.push_back(-12);
        tab_2.push_back(0);
        tab_2.push_back(1475);
		tab_3.push_back(1);
		tab_3.push_back(2);
        tab_3.push_back(-3);
        tab_3.push_back(4);
        tab_3.push_back(999);
		std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mSETTING THE THREE ITERATORS TO THE BEGINNING OF THE THREE CONSTRUCTORS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;

        i = tab.begin();
        j = tab_2.begin();
		k = tab_3.begin();
		std::cout << "\033[1;31m======================\033[0m" << std::endl;
        std::cout << "\033[1;33mDISPLAYING THE NUMBERS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================\033[0m" << std::endl;

        while (i != tab.end())
        {
            std::cout << i;
            i++;
        }
        while (j != tab_2.end())
        {
            std::cout << j;
            j++;
        }
		while (k != tab_3.end())
        {
            std::cout << k;
            k++;
        }
		std::cout << "\033[1;31m=================================\033[0m" << std::endl;
        std::cout << "\033[1;33mTRYING TO FIND NUMBERS THAT EXIST\033[0m" << std::endl;
        std::cout << "\033[1;31m=================================\033[0m" << std::endl;

		i = easyfind(tab, -636);
		j = easyfind(tab_2, 0);
		k = easyfind(tab_3, 1);
		std::cout << i;
		std::cout << j;
		std::cout << k;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
         std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE CONTAINER WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m============================================================\033[0m" << std::endl;

        std::list<int> tab;
		std::vector<int> tab_2;
		std::deque<int> tab_3;
		std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE ITERATOR WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;

        std::list<int>::iterator i;
        std::vector<int>::iterator j;
		std::deque<int>::iterator k;


        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;
        std::cout << "\033[1;33mADDING TWO SETS OF 5 NUMBERS TO THE CONTAINERS\033[0m" << std::endl;
        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;

        tab.push_back(5);
        tab.push_back(12);
        tab.push_back(17);
        tab.push_back(-636);
        tab.push_back(33);
        tab_2.push_back(74);
		tab_2.push_back(25);
        tab_2.push_back(-12);
        tab_2.push_back(0);
        tab_2.push_back(1475);
		tab_3.push_back(1);
		tab_3.push_back(2);
        tab_3.push_back(-3);
        tab_3.push_back(4);
        tab_3.push_back(999);
		std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mSETTING THE THREE ITERATORS TO THE BEGINNING OF THE THREE CONSTRUCTORS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;

        i = tab.begin();
        j = tab_2.begin();
		k = tab_3.begin();
		std::cout << "\033[1;31m======================\033[0m" << std::endl;
        std::cout << "\033[1;33mDISPLAYING THE NUMBERS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================\033[0m" << std::endl;

        while (i != tab.end())
        {
            std::cout << i;
            i++;
        }
        while (j != tab_2.end())
        {
            std::cout << j;
            j++;
        }
		while (k != tab_3.end())
        {
            std::cout << k;
            k++;
        }
		std::cout << "\033[1;31m=================================\033[0m" << std::endl;
        std::cout << "\033[1;33mTRYING TO FIND NUMBERS THAT EXIST\033[0m" << std::endl;
        std::cout << "\033[1;31m=================================\033[0m" << std::endl;

		k = easyfind(tab_3, 1);
		j = easyfind(tab_2, 0);
		i = easyfind(tab, 69844122);
		std::cout << k;
		std::cout << j;
		std::cout << i;


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try
    {
        std::cout << "\033[1;31m============================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE CONTAINER WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m============================================================\033[0m" << std::endl;

        std::list<int> tab;
		std::vector<int> tab_2;
		std::deque<int> tab_3;
		std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mCREATION OF A LIST, VECTOR AND DEQUE ITERATOR WITH TYPE INT\033[0m" << std::endl;
        std::cout << "\033[1;31m===========================================================\033[0m" << std::endl;

        std::list<int>::iterator i;
        std::vector<int>::iterator j;
		std::deque<int>::iterator k;


        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;
        std::cout << "\033[1;33mADDING TWO SETS OF 5 NUMBERS TO THE CONTAINERS\033[0m" << std::endl;
        std::cout << "\033[1;31m==============================================\033[0m" << std::endl;

        tab.push_back(5);
        tab.push_back(12);
        tab.push_back(17);
        tab.push_back(-636);
        tab.push_back(33);
        tab_2.push_back(74);
		tab_2.push_back(25);
        tab_2.push_back(-12);
        tab_2.push_back(0);
        tab_2.push_back(1475);
		tab_3.push_back(1);
		tab_3.push_back(2);
        tab_3.push_back(-3);
        tab_3.push_back(4);
        tab_3.push_back(999);
		std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;
        std::cout << "\033[1;33mSETTING THE THREE ITERATORS TO THE BEGINNING OF THE THREE CONSTRUCTORS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================================================================\033[0m" << std::endl;

        i = tab.begin();
        j = tab_2.begin();
		k = tab_3.begin();
		std::cout << "\033[1;31m======================\033[0m" << std::endl;
        std::cout << "\033[1;33mDISPLAYING THE NUMBERS\033[0m" << std::endl;
        std::cout << "\033[1;31m======================\033[0m" << std::endl;

        while (i != tab.end())
        {
            std::cout << i;
            i++;
        }
        while (j != tab_2.end())
        {
            std::cout << j;
            j++;
        }
		while (k != tab_3.end())
        {
            std::cout << k;
            k++;
        }
		std::cout << "\033[1;31m=================================\033[0m" << std::endl;
        std::cout << "\033[1;33mTRYING TO FIND NUMBERS THAT EXIST\033[0m" << std::endl;
        std::cout << "\033[1;31m=================================\033[0m" << std::endl;

		j = easyfind(tab_2, 0);
		i = easyfind(tab, 5);
		k = easyfind(tab_3, 99999999);
		std::cout << i;
		std::cout << j;
		std::cout << k;


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}