#include "ScalaireConversion.hpp"
#include "ConversionToNaN.hpp"

void WriteNaN( void )
{
	std::cout << "\033[1;37mchar: \033[1;31mimpossible\033[0m" << std::endl;
	std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
	std::cout << "\033[1;37mfloat: \033[1;32m" << "nanf" << std::endl;
	std::cout << "\033[1;37mdouble: \033[1;32m" << "nan" << "\033[0m" <<  std::endl;
}

bool CheckNaN( std::string popo )
{
	if (popo == "nanf" || popo == "nan" || popo == "NaN")
		return (SUCCESS);
	return (FAILURE);
}
