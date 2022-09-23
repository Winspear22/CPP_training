#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( const std::string & name, int grade ): _name(name), _grade(grade)
{

	std::cout << "\033[0;33mBureaucrat Constructor called.\033[0m" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy )
{
	/*if (this->_grade < 1)
		throw Bureaucrat::RankTooHighInCreation();
	else if (this->_grade > 150)
		throw Bureaucrat::RankTooLowInCreation();*/
	std::cout << "\033[0;33mBureaucrat Copy Constructor called.\033[0m" << std::endl;
    *this = copy;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "\033[0;31mBureaucrat Destructor called.\033[0m" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	/*if (this->_grade < 1)
		throw Bureaucrat::RankTooHighInCreation();
	else if (this->_grade > 150)
		throw Bureaucrat::RankTooLowInCreation();*/
	std::cout << "\033[0;34mBureaucrat Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
    {
        this->_grade = rhs._grade;
    }
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
	this->_grade = new_grade;
	return ;
}


void				Bureaucrat::increasegrade( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::RankTooLow();
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
		throw Bureaucrat::RankTooHigh();
	else 
	{
		setgrade(this->_grade + 1);
		std::cout << "\033[1;31mDemoting Bureaucrat's grade \033[1;35m" << this->getname() << "\033[1;31m from \033[1;35m" << this->getgrade() - 1 << "\033[1;31m to \033[1;35m" << this->getgrade() << ".\033[0m" << std::endl;
	}
	return ;
}

/*void				Bureaucrat::signForm( Form papier, Bureaucrat salarie )
{
	papier.beSigned(salarie);
	return ;
}*/

void Bureaucrat::signForm(Form & papier)
{
	if (papier.getgrade_to_execute() < 1 || papier.getgrade_to_execute() > 150)
		throw SignException();
	else if (papier.getgrade_to_sign() < 1 || papier.getgrade_to_sign() > 150)
		throw SignException();
	else if (papier.getsign_status() == SIGNED)
		std::cout << this->_name << " signed " << papier.getname() << std::endl;
	else if (papier.getgrade_to_sign() > this->_grade)
	{
		papier.setsign_status(SIGNED);
		std::cout << this->_name << " signed " << papier.getname() << std::endl;
	}
	else
	{
		std::cout << "Grade : " << papier.getgrade_to_sign() << std::endl;
		throw SignException();
	}
}


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << "\033[0mBureaucrat's name : \033[1;35m" << rhs.getname() << "\033[0m and grade : \033[1;35m" << rhs.getgrade() << ".\033[0m";
	return (o);
}