#include "ScalaireConversion.hpp"

ScalaireConversion::ScalaireConversion( std::string argv )
{
	this->_argv = argv;
    std::cout << "\033[1;32mConstructor ScalaireConversion called.\033[0m" << std::endl;
    return ;
}

ScalaireConversion::ScalaireConversion( ScalaireConversion const & copy )
{
    *this = copy;
    std::cout << "\033[1;32mCopy Constructor ScalaireConversion called.\033[0m" << std::endl;
        return ;
}

ScalaireConversion::~ScalaireConversion( void )
{
    std::cout << "\033[1;36mDestructor ScalaireConversion called.\033[0m" << std::endl;
        return ;
}

ScalaireConversion & ScalaireConversion::operator=( ScalaireConversion const & rhs )
{
    std::cout << "\033[1;34mAssignement operator ScalaireConversion called.\033[0m" << std::endl;
	this->my_number = rhs.my_number;
    return (*this);
}

void 	ScalaireConversion::PrintAllTypes( void )
{
	this->_PrintCharType();
	this->_PrintIntType();
	this->_PrintFloatType();
	this->_PrintDoubleType();
}

void	ScalaireConversion::FindExceptions( void )
{
	this->my_number = atof(this->_argv.c_str());
	if (!this->my_number && this->_argv.size() == 1 && this->_argv.c_str()[0] != '0')
        this->my_number = static_cast<double>(this->_argv.c_str()[0]);
	else if (!this->my_number and this->_argv.size() > 1 and this->_argv[0] != '0')
        throw NotRequiredTypesException();
}

void	ScalaireConversion::_PrintCharType( void )
{
	if (std::isinf(this->my_number) || std::isnan(this->my_number)
	|| this->my_number < 0 || my_number > 127)
		std::cout << "\033[1;37mchar: \033[1;31mimpossible\033[0m" << std::endl;
	else if ((this->my_number >= 0 && this->my_number < 32) || this->my_number == 127)
		std::cout << "\033[1;37mchar: \033[1;31mNon displayable\033[0m" << std::endl;
	else
		std::cout << "\033[1;37mchar: '\033[1;32m" <<  static_cast<char>(this->my_number) << "\033[1;37m'\033[0m" << std::endl;
}

void	ScalaireConversion::_PrintIntType( void )
{
	int nb_overflow;
	int nb_underflow;
	double nb;

	nb_overflow = std::numeric_limits<int>::max();;
	nb_underflow = std::numeric_limits<int>::min();
	nb = static_cast<double>(this->my_number);
    if (std::isinf(this->my_number) || std::isnan(this->my_number))
		std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
	else if (nb < nb_underflow || nb > nb_overflow)
		std::cout << "\033[1;37mint: \033[1;31mimpossible\033[0m" << std::endl;
	else
		std::cout << "\033[1;37mint: \033[1;32m" <<  static_cast<int>(this->my_number) << "\033[0m" << std::endl;
}

void	ScalaireConversion::_PrintFloatType( void )
{
	double nb;
	float nb_overflow;

	nb = static_cast<double>(this->my_number);
	nb_overflow = std::numeric_limits<float>::max();
	if (nb > nb_overflow && !(std::isinf(this->my_number)))
		std::cout << "\033[1;37mfloat: \033[1;31mimpossible\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;37mfloat: \033[1;32m" <<  static_cast<float>(this->my_number) << "\033[0m";
		if (std::fmod(this->my_number, 1) == 0)
       		std::cout << "\033[1;34m.0\033[0m";
		std::cout << "\033[1;33mf\033[0m" << std::endl;
	}
}

void	ScalaireConversion::_PrintDoubleType( void )
{
	long double nb;
	double nb_overflow;

	nb = static_cast<double>(this->my_number);
	nb_overflow = std::numeric_limits<double>::max();
	if (nb > nb_overflow && this->my_number != 0 && !(std::isinf(this->my_number)))
		std::cout << "\033[1;37mdouble: \033[1;31mimpossible\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;37mdouble: \033[1;32m" <<  static_cast<double>(this->my_number) << "\033[0m";
		if (std::fmod(this->my_number, 1) == 0)
       		std::cout << "\033[1;34m.0\033[0m";
		std::cout << std::endl;
	}
}
