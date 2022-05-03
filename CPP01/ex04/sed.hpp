#ifndef SED_HPP
# define SED_HPP

# include <iomanip>
# include <iostream>
# include <fstream>
# include <algorithm>
# include <cstring>

class Sed
{
public:

	std::string s1;
	std::string s2;
	std::ofstream ofs();
	int size;

	Sed(void);
	~Sed(void);

	bool ft_replace(Sed str);
};

#endif