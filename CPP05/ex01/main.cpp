#include "Bureaucrat.hpp"
#include "Form.hpp"

/*int main( void )
{
	Bureaucrat Pierre("Pierre", 35);
	Form papier("Formulaire 1", 45, 90);

	std::cout << papier << std::endl;
	std::cout << Pierre << std::endl;
	try
	{
		Pierre.signForm(papier);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	std::cout << papier << std::endl;
	std::cout << Pierre << std::endl;
    return (0);
}*/

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
}