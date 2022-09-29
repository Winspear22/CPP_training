#include "ConversionToFloat.hpp"

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
	(void)argv;
	return ;
}
