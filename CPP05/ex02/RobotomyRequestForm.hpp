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
    class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. This Bureaucrat cannot execute this RobotomyRequest Form. It is not signed.\033[0m");
			}
	};
    class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. This Bureaucrat cannot execute this RobotomyRequest Form. He is not high enough in the hierarchy.\033[0m");
			}
	};
};

#endif