
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat & copy );
	~Bureaucrat( void );
	Bureaucrat & operator=( Bureaucrat const & rhs );

	std::string			getname( void ) const;
	int					getgrade( void ) const;
	void				setgrade( int new_grade );
	void				increasegrade( void );
	void				decreasegrade( void );

private:
	std::string			_name;
    int					_grade;
	class RankTooHigh : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. The Bureaucrat cannot be promoted : grade too high.\033[0m");
			}
	};
	class RankTooLow : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. The Bureaucrat cannot be promoted : grade too low.\033[0m");
			}
	};
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif