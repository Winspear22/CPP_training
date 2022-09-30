#include "ConversionToFloat.hpp"
#include "ConversionToDouble.hpp"

bool CheckFloatType( std::string argv )
{
	int i;
	int max_length;
	int point;

	i = -1;
	point = 0;
	max_length = argv.length() - 1;
	if (max_length <= 1) // comprend le signe, pour ne pas que l'on écrite - ou +
		return (FAILURE);
	if (isdigit(argv[0]) == NOT_DIGIT)
	{
		if (argv[0] != '-' && argv[0] != '+')
			return (FAILURE);
		i = 0;
	}
	if (argv[max_length] != 'f')
		return (FAILURE);
	while (argv[++i] && i < max_length)
	{
		if (isdigit(argv[i]) == NOT_DIGIT)
		{
			if (argv[i] != '.')
				return (FAILURE);
			else
			{
				if (point == 1)
					return (FAILURE);
				point = 1;
			}
		}
	}

	return (SUCCESS);
}

#include <stdlib.h>

int		ft_point(std::string str)
{
	int	i = 0;
	int	j = 0;

	while (str[i])
	{
		if (str[i] == '.')
			break;
		i++;
	}
	if (str[i] != '.')
		return (0);
	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
}

void WriteFloat( std::string argv )
{
	double number;
	
	//number = ft_stod( argv );
	number = strtod(argv.c_str(), NULL);
	if (CheckPrintability(number) == FAILURE)
		; 
	else
		std::cout << "char: '" << static_cast<char>(number) << "'" <<  std::endl;
	std::cout << "\033[1;37mint: \033[1;32m" << static_cast<int>(number) << "\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << static_cast<float>(number) << "\033[1;33mf\033[0m" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << static_cast<double>(number) << "\033[0m" <<  std::endl;
}
