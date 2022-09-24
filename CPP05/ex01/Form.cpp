#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( const std::string name, const int grade_to_sign, const int grade_to_execute): _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	this->_is_signed = NOT_SIGNED;
	std::cout << "\033[0;32mForm Constructor called.\033[0m" << std::endl;
}

Form::Form( const Form & copy ): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
	std::cout << "\033[0;33mForm Copy Constructor called.\033[0m" << std::endl;
	
	this->_is_signed = NOT_SIGNED;
	*this = copy;
	return ;
}

Form::~Form( void )
{
	std::cout << "\033[0;31mForm Destructor called.\033[0m" << std::endl;
	return ;
}

Form & Form::operator=( Form const & rhs )
{
	std::cout << "\033[0;34mForm Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
        this->_is_signed = rhs._is_signed;
	return (*this);
}

std::string			Form::getname( void ) const
{
    return (this->_name);
}

int			Form::getgrade_to_sign( void ) const
{
    return (this->_grade_to_sign);
}

int			Form::getgrade_to_execute( void ) const
{
    return (this->_grade_to_execute);
}

bool			Form::getsign_status( void ) const
{
	if (this->_is_signed == NOT_SIGNED)
    	return (this->_is_signed);
	if (this->_is_signed == SIGNED)
		return (this->_is_signed);
	return (this->_is_signed);
}

void Form::setsign_status(bool signature)
{
	this->_is_signed = signature;
}


/*void Form::beSigned( Bureaucrat le_salarie )
{
	if (this->_is_signed == NOT_SIGNED)
	{
		if (le_salarie.getgrade() <= this->getgrade_to_sign())
			this->_is_signed = SIGNED;
		else
			throw Form::GradeTooLowException();
	}
    this->_is_signed = SIGNED;
}
*/

void Form::beSigned(Bureaucrat Bur)
{
	if  (Bur.getgrade() < this->_grade_to_sign && this->_grade_to_sign > 1 && this->_grade_to_sign < 150)
	{
		this->_is_signed = SIGNED;
		std::cout << Bur.getname() << " signed " << this->_name << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
		
}


std::ostream & operator<<( std::ostream & o, Form const & rhs )
{
	o << "\033[0mForm's name : \033[1;35m" << rhs.getname() << "\033[0m, grade to sign : \033[1;35m" << rhs.getgrade_to_sign() 
    << " \033[0mgrade to execute :\033[1;35m " << rhs.getgrade_to_execute() << "\033[0m is it signed yet ? : \033[1;35m";
	if (rhs.getsign_status() == NOT_SIGNED)
		o << "NOT SIGNED \033[0m";
	if (rhs.getsign_status() == SIGNED)
		o << "SIGNED\033[0m";
	return (o);
}