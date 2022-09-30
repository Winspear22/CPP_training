#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>
# include <stdint.h>
# include <cstdlib>

# define SUCCESS 0
# define FAILURE 1

typedef struct s_Data
{
	std::string str;
	int j;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif