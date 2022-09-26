#include "Bureaucrat.hpp"

int main( void )
{
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	
	Bureaucrat Pierre("Pierre");
	Bureaucrat Paul("Paul");
	Bureaucrat Jacques("Jacques");
	Bureaucrat Hubert("Hubert");
	Bureaucrat popo("const name");

	Pierre.setgrade(31);
	Paul.setgrade(1);
	Jacques.setgrade(150);
	Hubert.setgrade(25);
	popo.setgrade(100);
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	
	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
	std::cout << popo << std::endl;

	popo = Hubert;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
	std::cout << "\033[1;36mPROMOTING AND DEMOTING BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
	
	Pierre.decreasegrade();
	Hubert.increasegrade();
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mPROMOTING AND DEMOTING BUREAUCRATS TO THE WRONG LEVELS\033[0m" << std::endl;
	std::cout << "\033[1;31m======================================================\033[0m" << std::endl;
	
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
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING BUREAUCRATS WITH WRONG LEVELS\033[0m" << std::endl;
	std::cout << "\033[1;31m======================================\033[0m" << std::endl;
	
	try
	{
		Bureaucrat Adnen("I am above 150");
		Adnen.setgrade(151);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Adnen("I am under 0");
		Adnen.setgrade(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	
	std::cout << Paul << std::endl;
	std::cout << Pierre << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Hubert << std::endl;
    return (0);
}