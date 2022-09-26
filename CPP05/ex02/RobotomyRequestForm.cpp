#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string name ): AForm(name, 72, 45)
{
    this->_target = name;
	std::cout << "\033[0;32mRobotomyRequestForm Constructor called.\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & copy ): AForm("RobotomyRequestForm", 25, 5)
{
	std::cout << "\033[0;33mRobotomyRequestForm Copy Constructor called.\033[0m" << std::endl;
	*this = copy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "\033[0;31mRobotomyRequestForm Destructor called.\033[0m" << std::endl;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "\033[0;34mRobotomyRequestForm Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
        this->_target = rhs._target;
	return (*this);
}

void RobotomyRequestForm::execute( const Bureaucrat & executor ) const
{
    if (this->getsign_status() == NOT_SIGNED)
        throw CantExecuteFormException();
    if (executor.getgrade() > this->getgrade_to_sign() || executor.getgrade() > this->getgrade_to_execute())
        throw CantExecuteFormException();
    else
        std::cout << "Robotomy" << std::endl;
}