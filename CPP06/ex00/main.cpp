#include "ScalaireConversion.hpp"
#include "ConversionToInt.hpp"
#include "ConversionToDouble.hpp"
#include "ConversionToFloat.hpp"
#include "ConversionToChar.hpp"



/*bool	CheckPrintability( char c )
{
	if (static_cast<int>(c) < 32 || static_cast<int>(c) > 126)
	{
		std::cout << "\033[1;37mchar: \033[1;31mNon displayable.\033[0m" << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

bool	checkException(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "-inf")
		return (true);
	return (false);
}

void	isExcept(std::string str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;

	}
	else if (str == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
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

bool CheckIntType( std::string argv )
{
	int i;

	i = -1;
	if (argv.length() <= 1) // comprend le signe, pour ne pas que l'on écrite - ou +
		return (FAILURE);
	if (isdigit(argv[0]) == NOT_DIGIT)
	{
		if (argv[0] != '-' && argv[0] != '+')
			return (FAILURE);
		std::cout << "Je suis ici" << std::endl;
		i = 0;
	}
	while (argv[++i])
	{
		if (isdigit(argv[i]) == NOT_DIGIT)
			return (FAILURE);
	}
	return (SUCCESS);
}

long long ft_stoi(std::string str)
{
	long long i;
	long long signe;
	long long num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * signe);
}

void WriteInt( std::string argv )
{
	int number;
	
	number = ft_stoi( argv );
	if (CheckPrintability(number) == FAILURE)
		; 
	else
		std::cout << "\033[1;37mchar: '\033[1;32m" <<  static_cast<char>(number) << "\033[1;37m'\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;32m" << static_cast<int>(number) << "\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << static_cast<float>(number) << "\033[1;33mf\033[0m" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << static_cast<double>(number) << ".0" << "\033[0m" <<  std::endl;
}


bool CheckFloatType( std::string argv )
{
	int i;

	i = -1;
	if (argv.length() <= 1) // comprend le signe, pour ne pas que l'on écrite - ou +
		return (FAILURE);
	if (isdigit(argv[0]) == NOT_DIGIT)
	{
		if (argv[0] != '-' && argv[0] != '+')
			return (FAILURE);
		std::cout << "Je suis ici" << std::endl;
		i = 0;
	}
	while (argv[++i])
	{
		if (isdigit(argv[i]) == NOT_DIGIT)
			return (FAILURE);
	}
	return (SUCCESS);
}

void WriteFloat( std::string argv )
{
	return ;
}
*/

bool	CheckTypeIdentity( std::string argv )
{
	if (CheckCharType( argv ) == SUCCESS)
	{
		WriteChar( argv );
		return (SUCCESS);
	}
	if (CheckIntType( argv ) == SUCCESS)
	{
		WriteInt( argv );
		return (SUCCESS);
	}
	if (CheckFloatType( argv ) == SUCCESS)
	{
		WriteFloat( argv );
		return (SUCCESS);
	}
	if (CheckDoubleType( argv ) == SUCCESS)
	{
		WriteDouble( argv );
		return (SUCCESS);
	}
	else
		return (FAILURE);
	return (FAILURE);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "\033[1;31mError, you need one argument. Ex : ./a.out 42\033[0m" << std::endl;
        return (0);
    }
	std::string popo;

	popo = argv[1];
//	if (checkException(popo) == true)
//		isExcept(popo);
	if (CheckTypeIdentity( popo ) == SUCCESS)
		;
	else
		std::cout << "\033[1;31mError, you must type a valid type (char, int, float or double).\033[0m" << std::endl;
    return (0);
}