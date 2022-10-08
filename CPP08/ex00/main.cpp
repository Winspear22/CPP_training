#include "easyfind.hpp"

int main( void )
{
    try
    {
        std::list<int> tab;
		std::vector<int> tab_2;
        std::list<int>::iterator i;
        std::vector<int>::iterator j;


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

        i = tab.begin();
        j = tab_2.begin();
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
		i = easyfind(tab, -636);
		j = easyfind(tab_2, 0);
		std::cout << i;
		std::cout << j;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	    try
    {
        std::list<int> tab;
		std::vector<int> tab_2;
        std::list<int>::iterator i;
        std::vector<int>::iterator j;


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

        i = tab.begin();
        j = tab_2.begin();
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
		i = easyfind(tab, -636);
		j = easyfind(tab_2, 5);
		std::cout << i;
		std::cout << j;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	    try
    {
        std::list<int> tab;
		std::vector<int> tab_2;
        std::list<int>::iterator i;
        std::vector<int>::iterator j;


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

        i = tab.begin();
        j = tab_2.begin();
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
		j = easyfind(tab_2, 0);
		i = easyfind(tab, 27);
		std::cout << i;
		std::cout << j;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}