#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat Pierre("Pierre", 31);
	Bureaucrat Paul("Paul", 1);
	Bureaucrat Jacques("Jacques", 150);
	Bureaucrat Hubert("Hubert", 25);

	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
	Pierre.decreasegrade();
	Hubert.increasegrade();
	try
	{	
		Paul.increasegrade();
		Jacques.decreasegrade();
	}
	catch(const std::exception& e)
	{
		//std::cout << "\033[1;31mError. The Bureaucrat cannot be promoted : grade already at maximum -> 1.\033[0m" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jacques.decreasegrade();
		Paul.increasegrade();
	}
	catch(const std::exception& e)
	{
		//std::cout << "\033[1;31mError. The Bureaucrat cannot be demoted : grade already at minimum -> 150.\033[0m" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << Paul << std::endl;
	std::cout << Pierre << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
    return (0);
}