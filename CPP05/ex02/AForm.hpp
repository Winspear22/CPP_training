
#ifndef AFORM_HPP
# define AFORM_HPP

# define NOT_SIGNED 1
# define SIGNED 0

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm( const std::string name, int grade_to_sign, int grade_to_execute);
	AForm( const AForm & copy );
	virtual ~AForm( void );
	AForm & operator=( const AForm & rhs );
	
	void 			beSigned( Bureaucrat popo );
	std::string		getname( void ) const;
    int				getgrade_to_sign( void ) const;
    int				getgrade_to_execute( void ) const;
	bool 			getsign_status( void ) const;
	void			setsign_status(bool _is_signed);
	virtual void 	execute( Bureaucrat const & executor ) = 0;

	void	check_all_grades( void );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. You cannot create a AForm with a grade under 1.\033[0m");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. You cannot create an AForm with a grade above 150, you cannot sign it if the Bureaucrat's grade is too low.\033[0m");
			}
	};

private:
	const std::string 	_name;
    const int			_grade_to_sign;
    const int           _grade_to_execute;
    bool                _is_signed;
};

std::ostream & operator<<( std::ostream & o, AForm const & rhs );

#endif