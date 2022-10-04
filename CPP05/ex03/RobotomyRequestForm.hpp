#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm: public AForm
{
public:
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm & copy );
    ~RobotomyRequestForm( void );
    RobotomyRequestForm & operator=( const RobotomyRequestForm & rhs );

    virtual void execute( Bureaucrat const & executor );

private:
    std::string _target;
    void _RobotomisePeople( void ) const;
    class CantExecuteFormException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. This Bureaucrat cannot execute this RobotomyRequest Form. It is either not signed or the Bureaucrat does not have the required level\033[0m");
			}
	};
};

#endif