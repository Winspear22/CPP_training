
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
	
	void beSigned( Bureaucrat popo );
	std::string	getname( void ) const;
    int	getgrade_to_sign( void ) const;
    int	getgrade_to_execute( void ) const;
	bool getsign_status( void ) const;
	void	setsign_status(bool _is_signed);
	virtual void execute( const Bureaucrat & executor ) const = 0;

	void	checkGrades( void );

private:
	const std::string 	_name;
    const int			_grade_to_sign;
    const int           _grade_to_execute;
    bool                _is_signed;

    class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. You cannot create a AForm with a grade under 1.\033[0m"); // ton grade est trop bas (15 --> t'es trop élevé dans la hierrarchie)
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. You cannot create a AForm with a grade above 150.\033[0m"); // ton grade est trop haut (110 --> t'es pas assez gradé)
			}
	};
};

std::ostream & operator<<( std::ostream & o, AForm const & rhs );

#endif