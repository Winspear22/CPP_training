#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    std::cout << "\033[1;31m===============\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING INTERN\033[0m" << std::endl;
	std::cout << "\033[1;31m===============\033[0m" << std::endl;
	Intern 		Adnen;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING TWO BUREAUCRATS 1 AND 150\033[0m" << std::endl;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
	Bureaucrat	Pierre("Pierre");
	Bureaucrat	Paul("Paul");
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING A BASIC FORM\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	AForm		*Random_Form;

	Pierre.setgrade(1);
	Paul.setgrade(150);
    std::cout << "\033[1;31m================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING TWO ROBOTOMYREQUESTFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m================================\033[0m" << std::endl;
	try
    {
		Random_Form = Adnen.makeForm("RobotomyRequestForm", "RobotomyForm");
		if (Random_Form)
		{
			Pierre.signForm(*Random_Form);
			Pierre.executeForm(*Random_Form);
			Random_Form->execute(Pierre);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
		Random_Form = Adnen.makeForm("RobotomyRequestForm", "RobotomyForm");
		if (Random_Form)
		{
			Paul.signForm(*Random_Form);
			Paul.executeForm(*Random_Form);
			Random_Form->execute(Paul);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		delete Random_Form;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING TWO PRESIDENTIALPARDONFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	try
    {
		Random_Form = Adnen.makeForm("PresidentialPardonForm", "PresidentialPardon");
		if (Random_Form)
		{
			Pierre.signForm(*Random_Form);
			Pierre.executeForm(*Random_Form);
			Random_Form->execute(Pierre);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
		Random_Form = Adnen.makeForm("PresidentialPardonForm", "PresidentialPardon");
		if (Random_Form)
		{
			Paul.signForm(*Random_Form);
			Paul.executeForm(*Random_Form);
			Random_Form->execute(Paul);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		delete Random_Form;
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[1;31m==================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING TWO SHRUBBERYCREATIONFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m==================================\033[0m" << std::endl;

	try
    {
		Random_Form = Adnen.makeForm("ShrubberyCreationForm", "ShrubberyCreation");
		if (Random_Form)
		{
			Pierre.signForm(*Random_Form);
			Pierre.executeForm(*Random_Form);
			Random_Form->execute(Pierre);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
		Random_Form = Adnen.makeForm("ShrubberyCreationForm", "ShrubberyCreation");
		if (Random_Form)
		{
			Paul.signForm(*Random_Form);
			Paul.executeForm(*Random_Form);
			Random_Form->execute(Paul);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		delete Random_Form;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING A WRONG FORM\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================\033[0m" << std::endl;
	try
	    {
		Random_Form = Adnen.makeForm("ShrubberyCreationForm", "ShrubberyCreation");
		if (Random_Form)
		{
			Pierre.signForm(*Random_Form);
			Pierre.executeForm(*Random_Form);
			Random_Form->execute(Pierre);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
		Random_Form = Adnen.makeForm("ShrubberyCreationForm", "ShrubberyCreation");
		if (Random_Form)
		{
			Paul.signForm(*Random_Form);
			Paul.executeForm(*Random_Form);
			Random_Form->execute(Paul);
			delete Random_Form;
		}
    }
  	catch(const std::exception& e)
	{
		delete Random_Form;
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
