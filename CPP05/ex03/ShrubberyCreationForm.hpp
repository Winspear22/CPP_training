#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
public:
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm & copy );
    ~ShrubberyCreationForm( void );
    ShrubberyCreationForm & operator=( const ShrubberyCreationForm & rhs );

    virtual void execute( Bureaucrat const & executor );

private:
    std::string _target;

    void _CreateTree( void ) const;
	class CantExecuteFormException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. This Bureaucrat cannot execute this ShrubberyCreation Form. It is either not signed or the Bureaucrat does not have the required level\033[0m");
			}
	};


};

#endif