#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	Bureaucrat Pierre("Pierre");
	Bureaucrat Paul("Paul");
	Bureaucrat Jacques("Jacques");
	Bureaucrat Franck(Pierre);

	Pierre.setgrade(35);
	Paul.setgrade(1);
	Franck.setgrade(89);
	Jacques = Pierre;
/*	try
	{
		Bureaucrat Jean("popo");
		Jean.setgrade(151);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat Jean("popo");
		Jean.setgrade(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}*/
	std::cout << "\033[1;31m==================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m==================\033[0m" << std::endl;

	Form papier("Formulaire 1", 45, 90);
	Form papier2("Formulaire 2", 150, 150);
	Form papier4("Formulaire 4", 1, 1);
	Form papier5("Formulaire 5", 1, 1);
	Form papier6(papier);

	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;
	std::cout << Jacques << std::endl;
	std::cout << Franck << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << papier << std::endl;
	std::cout << papier2 << std::endl;
	std::cout << papier4 << std::endl;
	std::cout << papier5 << std::endl;
	std::cout << papier6 << std::endl;
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	std::cout << "\033[1;36mSETTING JACQUES'S GRADE TO 150\033[0m" << std::endl;
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	try
	{ 
		Jacques.setgrade(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Jacques << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN WITH THE RIGHT LEVEL\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	
	try
	{
		Pierre.signForm(papier);
		Jacques.signForm(papier2);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN SEVERAL TIMES\033[0m" << std::endl;
	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	try
	{
		Pierre.signForm(papier);
		Jacques.signForm(papier2);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	std::cout << "\033[1;36mTRYING TO SIGN WITH THE WRONG LEVEL\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	try
	{
		Pierre.signForm(papier5);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING ALL THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << papier << std::endl;
	std::cout << papier2 << std::endl;
	std::cout << papier4 << std::endl;
	std::cout << papier5 << std::endl;
    return (0);
}
/*
int main(void)
{
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;31m Creating a Bureaucrat\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	Bureaucrat Br("Smith", 80);
	Form papier("Formulaire 1", 45, 90);
	
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;32m Changing his grade\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		std::cout << Br << std::endl;
		Br.setgrade(41);
		std::cout << papier << std::endl;
		Br.signForm(papier);
		std::cout << papier << std::endl;
		Br.setgrade(145);
		std::cout << Br << std::endl;
		Br.setgrade(2);
		std::cout << Br << std::endl;
		papier.setsign_status(NOT_SIGNED);
		Br.signForm(papier);
		Br.setgrade(65);
		std::cout << Br << std::endl;
		
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m incrementing his grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		Br.increasegrade();
		
		std::cout << Br << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;34m incrementing his grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		Br.decreasegrade();
		std::cout << Br << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;35m Trying to sign with inssufisent grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		Br.setgrade(82);
		papier.setsign_status(NOT_SIGNED);
		Br.signForm(papier); // <- exception because grade is insuffisent
	}
	catch (std::exception const &e)
	{
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << Br.getname() << " ";
		std::cerr << e.what() << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
	}
}*/