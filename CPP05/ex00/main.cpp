#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat Pierre("Pierre", 31);
	Bureaucrat Paul("Paul", 2);
	Bureaucrat Jacques("Jacques", 149);

	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;

	try
	{	
		Pierre.decreasegrade();
		Paul.increasegrade();
		Paul.increasegrade();
	}
	catch(const std::exception& e)
	{
		std::cout << "rror" << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << Paul << std::endl;
	std::cout << Pierre << std::endl;
    return (0);
}