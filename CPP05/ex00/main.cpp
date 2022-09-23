#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat Pierre("Pierre", 31);
	Bureaucrat Paul("Paul", 1);
	Bureaucrat Jacques("Jacques", 150);
	Bureaucrat Hubert("Hubert", 25);
	Bureaucrat popo("const name", 100);

	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
	std::cout << popo << std::endl;

	popo = Hubert;
	std::cout << popo << std::endl;
	Pierre.decreasegrade();
	Hubert.increasegrade();
	try
	{	
		Paul.increasegrade();
		Jacques.decreasegrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jacques.decreasegrade();
		Paul.increasegrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat("I am above 150", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat("I am under 1", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Paul << std::endl;
	std::cout << Pierre << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
    return (0);
}