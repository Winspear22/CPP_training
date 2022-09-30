#include "B.hpp"

B::B( void )
{
    std::cout << "\033[1;35B constructor called." << std::endl;
}

B::~B( void )
{
    std::cout << "\033[1;35B detructor called." << std::endl;
}