#include "ConversionToChar.hpp"

bool	CheckPrintability( char c )
{
	if (static_cast<int>(c) < 32 || static_cast<int>(c) > 126)
	{
		std::cout << "\033[1;37mchar: \033[1;31mNon displayable.\033[0m" << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

void	WriteChar(std::string str)
{
	char c;

	c = str[0];
	if (isdigit(c) == DIGIT)
		c = c - 48;
	if (CheckPrintability(c) == FAILURE)
		; 
	else
		std::cout << "\033[1;37mchar: '\033[1;32m" <<  static_cast<char>(c) << "\033[1;37m'\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;32m" << static_cast<int>(c) << "\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << static_cast<float>(c) << "\033[1;33mf\033[0m" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << static_cast<double>(c) << ".0" << "\033[0m" <<  std::endl;
}

bool	CheckCharType( std::string argv )
{
	if (argv.length() != 1)
		return (FAILURE);
	return (SUCCESS);
}
