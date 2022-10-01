#include "iter.hpp"

void display_tab( const int i )
{
    std::cout << i << " ";
}

void display_tab2( const float i )
{
    std::cout << std::setw(1) << std::setprecision(4) << i << "f ";
}


#include <unistd.h>

void display_str( std::string str )
{
    std::cout << str; 
}

void    ft_putchar(const char c)
{
   // write(1, &c, 1);
   std::cout << c;// << std::endl;
}

int main( void )
{
    int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float tab_2[10] = {0.71, 1.41, 2.01, 3.14, 4.62, 5.54, 6.05, 7.66, 8.87, 9.07};
    std::string str[6];
    char test_2[32] = "Coucou les amis comment ca va ?";


    str[0] = "Coucou ";
    str[1] = "les ";
    str[2] = "amis ";
    str[3] = "ca ";
    str[4] = "va ";
    str[5] = "?";
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH STD::STRING\033[0m" << std::endl;
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    iter<std::string>(str, 6, &display_str);
    std::cout << std::endl;
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH STD::STRING\033[0m" << std::endl;
    std::cout << "\033[1;31m======================================\033[0m" << std::endl;
    iter<std::string>(str, 6, &display_str);
    std::cout << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH INTEGER\033[0m" << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    iter<int>(tab, 10, &display_tab);
    std::cout << std::endl;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH INTEGER\033[0m" << std::endl;
    std::cout << "\033[1;31m==================================\033[0m" << std::endl;
    iter(tab, 10, &display_tab);
    std::cout << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH CHARS\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter<char>(test_2, 32, &ft_putchar);
    std::cout << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH CHARS\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter(test_2, 32, &ft_putchar);
    std::cout << std::endl;
	std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;33mEXPLICIT USE TEMPLATE WITH FLOAT\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter<float>(tab_2, 10, &display_tab2);
    std::cout << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    std::cout << "\033[1;36mIMPLICIT USE TEMPLATE WITH FLOAT\033[0m" << std::endl;
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
    iter(tab_2, 10, &display_tab2);
    std::cout << std::endl;
    return (0);
}