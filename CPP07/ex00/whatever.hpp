#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iomanip>
# include <iostream>

template< typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	else if (x < y)
		return (y);
	else if (x == y)
		return (y);
	return (y);
}

template< typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	else if (x > y)
		return (y);
	else if (x == y)
		return (y);
	return (y);
}

template< typename T>
void swap(T x, T y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif