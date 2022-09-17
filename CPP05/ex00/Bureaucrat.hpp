
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
	void				increasegrade( void );
	void				decreasegrade( void );

private:
	std::string			_name;
    int					_grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif