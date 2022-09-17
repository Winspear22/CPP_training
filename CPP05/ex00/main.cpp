#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat Pierre("Pierre", 31);
	Bureaucrat Paul("Paul", 2);
	Bureaucrat Jacques("Jacques", 149);

	std::cout << Pierre << std::endl;
	Pierre.decreasegrade();
	Paul.increasegrade();


    return (0);
}