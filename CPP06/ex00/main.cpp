#include "ScalaireConversion.hpp"
#include "ConversionToInt.hpp"
#include "ConversionToDouble.hpp"
#include "ConversionToFloat.hpp"
#include "ConversionToChar.hpp"
#include "ConversionToInf.hpp"
#include "ConversionToNaN.hpp"

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
	if (CheckTypeIdentity( popo ) == SUCCESS)
		return (SUCCESS);
	else if (CheckInf( popo ) == SUCCESS)
		WriteInf( popo );
	else if (CheckNaN( popo ) == SUCCESS)
		WriteNaN();
	else
		std::cout << "\033[1;31mError, you must type a valid type (char, int, float or double).\033[0m" << std::endl;
    return (0);
}