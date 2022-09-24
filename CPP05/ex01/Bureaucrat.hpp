#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat( const std::string & name );
	Bureaucrat( const Bureaucrat & copy );
	~Bureaucrat( void );
	Bureaucrat & operator=( const Bureaucrat & rhs );

	std::string			getname( void ) const;
	int					getgrade( void ) const;
	void				setgrade( int new_grade );
	void				increasegrade( void );
	void				decreasegrade( void );
	void				signForm( Form & papier );

private:
	const std::string 		_name;
    int						_grade;
	
	class RankTooHighInCreation : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;38mError. You cannot create a Bureaucrat under the rank of 1.\033[0m");
			}
	};
	class RankTooLowInCreation : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;38mError. You cannot create a Bureaucrat above the rank of 150.\033[0m");
			}
	};
	class RankTooHigh : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. The Bureaucrat cannot be promoted : grade already at maximum -> 1.\033[0m");
			}
	};
	class RankTooLow : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. The Bureaucrat cannot be demoted : grade already at minimum -> 150.\033[0m");
			}
	};
	class SignException : public std::exception
	{
		public :
		 
			virtual const char *what() const throw()
			{
				return ("\033[1;31mThis Bureaucrat cannot grade this paper.\033[1;35m");
			}
		};
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif