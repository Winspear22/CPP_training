#ifndef INTERN_HPP
# define INTERN_HPP


# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern( void );
	Intern( const Intern & copy );
	~Intern( void );
	Intern & operator=( const Intern & rhs );

    AForm *makeForm(std::string name, std::string target);

private:
	class ErrorFormCreationException : public std::exception
	{
		public :
		 
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. The Intern cannot create this Form because it does not exist.\033[0m");
			}
	};
};

#endif