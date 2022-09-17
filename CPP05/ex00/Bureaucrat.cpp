#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( std::string name, int grade )
{
	std::cout << "\033[0;32mBureaucrat Constructor called.\033[0m" << std::endl;
	this->_name = name;
	this->_grade = grade;
	std::cout << "\033[1;37mName of the Bureaucrat : \033[1;35m" << this->_name << std::endl;
	std::cout << "\033[1;37mGrade of the Bureaucrat : \033[1;35m" << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy )
{
	std::cout << "\033[0;33mBureaucrat Copy Constructor called.\033[0m" << std::endl;
    *this = copy;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "\033[0;31mBureaucrat Destructor for \033[1;35m" << this->_name << "\033[0;31m called.\033[0m" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "\033[0;34mBureaucrat Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
    {
		this->_name = rhs._name;
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

void				Bureaucrat::increasegrade( void )
{
	std::cout << "\033[1;33mIncreasing Bureaucrat's grade \033[1;35m" << this->_name << "\033[1;33m from \033[1;35m" << this->_grade << "\033[1;33m to \033[1;35m" << this->_grade - 1 << ".\033[0m" << std::endl;
	this->_grade--;
}

void				Bureaucrat::decreasegrade( void )
{
	std::cout << "\033[1;31mDecreasing Bureaucrat's grade \033[1;35m" << this->_name << "\033[1;31m from \033[1;35m" << this->_grade << "\033[1;31m to \033[1;35m" << this->_grade - 1 << ".\033[0m" << std::endl;
	this->_grade++;
	return ;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getname() << rhs.getgrade();
	return (o);
}