#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	std::cout << "\033[1;31m====================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING BUREAUCRATS GRADE 1 AND 150\033[0m" << std::endl;
	std::cout << "\033[1;31m====================================\033[0m" << std::endl;
	
	Bureaucrat jojo("lolo");
		Bureaucrat Pierre("Pierre");
	Pierre.setgrade(1);
	jojo.setgrade(150);
std::cout << Pierre << std::endl;
std::cout << jojo << std::endl;

	RobotomyRequestForm popo("salut");
	PresidentialPardonForm lolo("lolo");
	ShrubberyCreationForm sasa("sasa");
	jojo.getname();
		std::cout << lolo << std::endl;

	try
	{
		lolo.execute(jojo);
		popo.execute(jojo);	
		sasa.execute(jojo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Pierre.signForm(lolo);
	Pierre.signForm(popo);
	Pierre.signForm(sasa);

	std::cout << lolo << std::endl;
	try
	{
		lolo.execute(Pierre);
		popo.execute(Pierre);	
		sasa.execute(Pierre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}