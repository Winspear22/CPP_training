#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( const std::string & name ): _name(name)
{
	std::cout << "\033[0;33mBureaucrat Constructor called.\033[0m" << std::endl;
	this->_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy ): _name(copy._name)
{
	*this = copy;
	std::cout << "\033[0;33mBureaucrat Copy Constructor called.\033[0m" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "\033[0;31mBureaucrat Destructor called.\033[0m" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		this->_grade = rhs.getgrade();
	std::cout << "\033[0;34mBureaucrat Copy assignment operator called.\033[0m" << std::endl;
	return (*this);
}

std::string			Bureaucrat::getname( void ) const
{
	return (this->_name);
}

int					Bureaucrat::getgrade( void ) const
{
	return (this->_grade);
}

void				Bureaucrat::setgrade( int new_grade )
{
	if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else 
		this->_grade = new_grade;
	return ;
}


void				Bureaucrat::increasegrade( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		setgrade(this->_grade - 1);
		std::cout << "\033[1;33mPromoting Bureaucrat's grade \033[1;35m" << this->getname() << "\033[1;33m from \033[1;35m" << this->getgrade() + 1 << "\033[1;33m to \033[1;35m" << this->getgrade() << ".\033[0m" << std::endl;
	}
	return ;
}

void				Bureaucrat::decreasegrade( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooHighException();
	else 
	{
		setgrade(this->_grade + 1);
		std::cout << "\033[1;31mDemoting Bureaucrat's grade \033[1;35m" << this->getname() << "\033[1;31m from \033[1;35m" << this->getgrade() - 1 << "\033[1;31m to \033[1;35m" << this->getgrade() << ".\033[0m" << std::endl;
	}
	return ;
}

void Bureaucrat::signForm(Form & papier)
{
	if (papier.getsign_status() == SIGNED)
		std::cout << "\033[1;31m" << this->getname() << " could not sign " << papier.getname() << " because it is already signed.\033[0m" << std::endl;
	else if (papier.getgrade_to_sign() >= this->_grade)
	{
		papier.beSigned(*this);
		std::cout << "\033[1;35m" << this->_name << "\033[0m signed \033[1;35m" << papier.getname() << "\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[1;31m" << this->getname() << " could not sign " << papier.getname() << " because he does not have the right level.\033[0m" << std::endl;
		throw CannotSignFormException();
	}
}


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << "\033[0mBureaucrat's name : \033[1;35m" << rhs.getname() << "\033[0m and grade : \033[1;35m" << rhs.getgrade() << ".\033[0m";
	return (o);
}