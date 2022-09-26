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
	
	Bureaucrat Paul("Paul");
	Bureaucrat Pierre("Pierre");
	Pierre.setgrade(1);
	Paul.setgrade(150);
	std::cout << "\033[1;31m======================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING THE BUREAUCRATS\033[0m" << std::endl;
	std::cout << "\033[1;31m======================\033[0m" << std::endl;
	
	std::cout << Pierre << std::endl;
	std::cout << Paul << std::endl;

	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING ROBOTOMYREQUESTFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	
	RobotomyRequestForm RobotomyForm("Robotomy_Form");
	std::cout << "\033[1;31m===============================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING PRESIDENTIALPARDONFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m===============================\033[0m" << std::endl;
	
	PresidentialPardonForm Pardon_Form("Sasuke");

	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	std::cout << "\033[1;36mCREATING SHRUBBERYCREATIONFORM\033[0m" << std::endl;
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	
	ShrubberyCreationForm Shrubbery_Form("Shrubbery_Form");

	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << "\033[1;36mLISTING THE DIFFERENT FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m===========================\033[0m" << std::endl;
	std::cout << RobotomyForm << std::endl;
	std::cout << Pardon_Form << std::endl;
	std::cout << Shrubbery_Form << std::endl;

	std::cout << "\033[1;31m============================\033[0m" << std::endl;
	std::cout << "\033[1;36mVERIFYING THE SIGN CONDITION\033[0m" << std::endl;
	std::cout << "\033[1;31m============================\033[0m" << std::endl;

	try
	{
		Pardon_Form.execute(Paul);
		RobotomyForm.execute(Paul);	
		Shrubbery_Form.execute(Paul);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===============================\033[0m" << std::endl;
	std::cout << "\033[1;36mSIGNING THE THE FORM WITH PIERRE\033[0m" << std::endl;
	std::cout << "\033[1;31m===============================\033[0m" << std::endl;

	Pierre.signForm(Pardon_Form);
	Pierre.signForm(RobotomyForm);
	Pierre.signForm(Shrubbery_Form);
	std::cout << "\033[1;31m===================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mTHE FORMS HAVE BEEN SIGNED AND ARE READY TO EXECUTE\033[0m" << std::endl;
	std::cout << "\033[1;31m===================================================\033[0m" << std::endl;

	std::cout << Pardon_Form << std::endl;
	std::cout << RobotomyForm << std::endl;
	std::cout << Shrubbery_Form << std::endl;
	std::cout << "\033[1;31m===================\033[0m" << std::endl;
	std::cout << "\033[1;36mEXECUTING THE FORMS\033[0m" << std::endl;
	std::cout << "\033[1;31m===================\033[0m" << std::endl;
	try
	{
		Pardon_Form.execute(Pierre);
		RobotomyForm.execute(Pierre);	
		Shrubbery_Form.execute(Pierre);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m=====================================================================\033[0m" << std::endl;
	std::cout << "\033[1;36mEXECUTING THE FORMS THROUGH THE BUREAUCRATS PIERRE(1), THEN PAUL(150)\033[0m" << std::endl;
	std::cout << "\033[1;31m=====================================================================\033[0m" << std::endl;
	std::cout << "\033[1;31m======\033[0m" << std::endl;
	std::cout << "\033[1;36mPIERRE\033[0m" << std::endl;
	std::cout << "\033[1;31m======\033[0m" << std::endl;
	try
	{
		Pierre.executeForm(RobotomyForm);
		Pierre.executeForm(Pardon_Form);
		Pierre.executeForm(Shrubbery_Form);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m====\033[0m" << std::endl;
	std::cout << "\033[1;36mPAUL\033[0m" << std::endl;
	std::cout << "\033[1;31m====\033[0m" << std::endl;
	try
	{
		Paul.executeForm(RobotomyForm);
		Paul.executeForm(Pardon_Form);
		Paul.executeForm(Shrubbery_Form);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[1;31m===========\033[0m" << std::endl;
	std::cout << "\033[1;36mDESTRUCTORS\033[0m" << std::endl;
	std::cout << "\033[1;31m===========\033[0m" << std::endl;
    return (0);
}