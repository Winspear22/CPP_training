
#ifndef FORM_HPP
# define FORM_HPP

# define NOT_SIGNED 1
# define SIGNED 0

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
//	Form( const std::string & name );
	Form( const std::string name, const int grade_to_sign, const int grade_to_execute);
	Form( const Form & copy );
	~Form( void );
	Form & operator=( const Form & rhs );
	
	void beSigned( Bureaucrat popo );
	std::string	getname( void ) const;
    int	getgrade_to_sign( void ) const;
    int	getgrade_to_execute( void ) const;
	bool getsign_status( void ) const;
		void	setsign_status(bool _is_signed);

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
				return ( "\033[1;31mError. The Bureaucrat cannot sign this form : form's grade is too high, you need to be at least over grade X \033[0m"); // ton grade est trop bas (15 --> t'es trop élevé dans la hierrarchie)
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. The Bureaucrat cannot sign this form : form's grade is too low, you need to be at least under grade X \033[0m"); // ton grade est trop haut (110 --> t'es pas assez gradé)
			}
	};
};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif