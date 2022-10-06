#ifndef ITER_HPP
# define ITER_HPP

# include <iomanip>
# include <iostream>
# include <string.h>


template< typename T>
void iter( T *tab, int size, void (*f)(const T))
{
    int i;

    i = -1;
    while (++i < size)
		f(tab[i]);
}

template<typename T>
void iter(T const *tab, size_t const size,  void(*f)(T const &ref))
{
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
    return;
}

#endif