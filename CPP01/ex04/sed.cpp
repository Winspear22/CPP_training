#include "sed.hpp"

Sed::Sed(void)
{
    return ;
}

Sed::~Sed(void)
{
    return ;
}

bool Sed::ft_replace(Sed str)
{
	int i;
	std::string new_str;

	i = 0;
//	new_str = str.s2;
	std::cout << "S1 avant = " << str.s1 << std::endl;
	std::cout << "S2 avant = "  << str.s2 << std::endl;
	while (i < str.size)
	{
		if (str.s1.compare(i, str.size, str.s1) == 0)
		{
		//	str.s2.erase(i, str.size);
		//	str.s2.insert(i, str.s1);
			str.s1.replace(i, str.size, str.s2);
		}
		i++;
	}
	std::cout << "S1 apres = " << str.s1 << std::endl;
	std::cout << "S2 après = " << str.s2 << std::endl;
	std::cout << "new_str apres = " << new_str << std::endl;
	return (true);
}