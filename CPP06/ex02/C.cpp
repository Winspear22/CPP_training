#include "C.hpp"

C::C( void )
{
    std::cout << "\033[1;36C constructor called." << std::endl;
}

C::~C( void )
{
    std::cout << "\033[1;36C detructor called." << std::endl;
}