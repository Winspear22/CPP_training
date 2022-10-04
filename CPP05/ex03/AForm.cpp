#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( const std::string name, int grade_to_sign, int grade_to_execute): _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	this->check_all_grades(); 
	this->_is_signed = NOT_SIGNED;
	std::cout << "\033[0;32mAForm Constructor called.\033[0m" << std::endl;
}

AForm::AForm( const AForm & copy ): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
	std::cout << "\033[0;33mAForm Copy Constructor called.\033[0m" << std::endl;
	
	this->_is_signed = NOT_SIGNED;
	*this = copy;
	return ;
}

AForm::~AForm( void )
{
	std::cout << "\033[0;31mAForm Destructor called.\033[0m" << std::endl;
	return ;
}

AForm & AForm::operator=( AForm const & rhs )
{
	std::cout << "\033[0;34mAForm Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
        this->_is_signed = rhs._is_signed;
	return (*this);
}

std::string			AForm::getname( void ) const
{
    return (this->_name);
}

int			AForm::getgrade_to_sign( void ) const
{
    return (this->_grade_to_sign);
}

int			AForm::getgrade_to_execute( void ) const
{
    return (this->_grade_to_execute);
}

bool			AForm::getsign_status( void ) const
{
	if (this->_is_signed == NOT_SIGNED)
    	return (this->_is_signed);
	if (this->_is_signed == SIGNED)
		return (this->_is_signed);
	return (this->_is_signed);
}

void AForm::setsign_status(bool signature)
{
	this->_is_signed = signature;
}

void	AForm::check_all_grades( void )
{
	if (this->_grade_to_sign < 1
			|| this->_grade_to_execute < 1)
			throw AForm::GradeTooHighException();
	if (this->_grade_to_sign > 150
			|| this->_grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat salarie)
{
	if  (salarie.getgrade() <= this->_grade_to_sign)
		setsign_status(SIGNED);
	else
		throw AForm::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs )
{
	o << "\033[0mAForm's name : \033[1;35m" << rhs.getname() << "\033[0m, grade to sign : \033[1;35m" << rhs.getgrade_to_sign() 
    << " \033[0mgrade to execute :\033[1;35m " << rhs.getgrade_to_execute() << "\033[0m is it signed yet ? : \033[1;35m";
	if (rhs.getsign_status() == NOT_SIGNED)
		o << "NOT SIGNED \033[0m";
	if (rhs.getsign_status() == SIGNED)
		o << "SIGNED\033[0m";
	return (o);
}