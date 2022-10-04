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

	Pierre.setgrade(1);
	Paul.setgrade(150);
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATION OF A BASIC FORM\033[0m" << std::endl;
	std::cout << "\033[1;31m========================\033[0m" << std::endl;
	AForm		*Random_Form;

    std::cout << "\033[1;31m================================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING TWO ROBOTOMYREQUESTFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m================================\033[0m" << std::endl;
	std::cout << "\033[1;31m====================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A WORKING ROBOTOMYFORM FOR PIERRE (1)\033[0m" << std::endl;
	std::cout << "\033[1;31m====================================================\033[0m" << std::endl;

	try
    {
		Random_Form = Adnen.makeForm("robotomy request", "RobotomyForm");
		if (Random_Form)
		{
			std::cout << "\033[1;31m==================================\033[0m" << std::endl;
			std::cout << "\033[1;36mPIERRE SIGNS IT AND IT IS EXECUTED\033[0m" << std::endl;
			std::cout << "\033[1;31m==================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A NON-WORKING ROBOTOMYFORM FOR PAUL (150)\033[0m" << std::endl;
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;

	try
    {
		Random_Form = Adnen.makeForm("robotomy request", "RobotomyForm");
		if (Random_Form)
		{
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
			std::cout << "\033[1;36mPAUL TRIES TO SIGN AND EXECUTE IT\033[0m" << std::endl;
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A WORKING PRESIDENTIALFORM FOR PIERRE (1)\033[0m" << std::endl;
	std::cout << "\033[1;31m========================================================\033[0m" << std::endl;

	try
    {
		Random_Form = Adnen.makeForm("pardon request", "PresidentialPardon");
		if (Random_Form)
		{
			std::cout << "\033[1;31m==================================\033[0m" << std::endl;
			std::cout << "\033[1;36mPIERRE SIGNS IT AND IT IS EXECUTED\033[0m" << std::endl;
			std::cout << "\033[1;31m==================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m============================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A NON-WORKING PRESIDENTIALFORM FOR PAUL (150)\033[0m" << std::endl;
	std::cout << "\033[1;31m============================================================\033[0m" << std::endl;
	try
    {
		Random_Form = Adnen.makeForm("pardon request", "PresidentialPardon");
		if (Random_Form)
		{
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
			std::cout << "\033[1;36mPAUL TRIES TO SIGN AND EXECUTE IT\033[0m" << std::endl;
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m=============================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A WORKING SHRUBBERYCREATIONFORM FOR PIERRE (1)\033[0m" << std::endl;
	std::cout << "\033[1;31m=============================================================\033[0m" << std::endl;
	try
    {
		std::cout << "\033[1;31m================================\033[0m" << std::endl;
		std::cout << "\033[1;36mINTERN CREATES THE SHRUBBERYFORM\033[0m" << std::endl;
		std::cout << "\033[1;31m================================\033[0m" << std::endl;
		Random_Form = Adnen.makeForm("shrubbery request", "ShrubberyCreation");
		std::cout << "\033[1;31m==================================\033[0m" << std::endl;
		std::cout << "\033[1;36mPIERRE SIGNS IT AND IT IS EXECUTED\033[0m" << std::endl;
		std::cout << "\033[1;31m==================================\033[0m" << std::endl;

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
	std::cout << "\033[1;31m=================================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mINTERN CREATES A NON-WORKING SHRUBBERYCREATIONFORM FOR PAUL (150)\033[0m" << std::endl;
	std::cout << "\033[1;31m=================================================================\033[0m" << std::endl;
	try
    {
		Random_Form = Adnen.makeForm("shrubbery request", "ShrubberyCreation");
		if (Random_Form)
		{
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
			std::cout << "\033[1;36mPAUL TRIES TO SIGN AND EXECUTE IT\033[0m" << std::endl;
			std::cout << "\033[1;31m=================================\033[0m" << std::endl;
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
	std::cout << "\033[1;31m===================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mASKING THE INTERN TO CREATE FORMS THAT DO NOT EXIST\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================================\033[0m" << std::endl;
	try
	{
		Random_Form = Adnen.makeForm("popo", "ShrubberyCreation");
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
    {
		Random_Form = Adnen.makeForm("lolo", "ShrubberyCreation");
    }
  	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
