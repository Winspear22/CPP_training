#ifndef ITER_HPP
# define ITER_HPP

# include <iomanip>
# include <iostream>
# include <string.h>

template< typename T>
void iter( T *tab, int size, void (*f)(const T & ref))
{
    int i;

    i = -1;
    while (++i < size)
		f(tab[i]);
}

#endif