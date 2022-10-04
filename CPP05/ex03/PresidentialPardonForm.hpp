#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
public:
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( const PresidentialPardonForm & copy );
    ~PresidentialPardonForm( void );
    PresidentialPardonForm & operator=( const PresidentialPardonForm & rhs );

    virtual void execute( Bureaucrat const & executor );

private:
    std::string _target;

	void _Presidentialardon( void ) const;

	class CantExecuteFormException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. This Bureaucrat cannot execute this PresidentialPardon Form. It is either not signed or the Bureaucrat does not have the required level\033[0m");
			}
	};
};

#endif