/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:36:17 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/04 15:36:19 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>
# include "AForm.hpp"

class AForm;

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
	void				signForm( AForm & papier );
	void				executeForm( AForm const & form );

private:
	const std::string 		_name;
    int						_grade;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. You cannot create or promote a Bureaucrat under the grade 1.\033[0m");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ( "\033[1;31mError. You cannot create or demote a Bureaucrat above the grade 150.\033[0m");
			}
	};
	class CannotSignFormException : public std::exception
	{
		public :
		 
			virtual const char *what() const throw()
			{
				return (0);
			}
	};
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif