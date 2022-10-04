/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:35:31 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/04 15:35:34 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define NOT_SIGNED 1
# define SIGNED 0

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form( const std::string name, int grade_to_sign, int grade_to_execute);
	Form( const Form & copy );
	~Form( void );
	Form & operator=( const Form & rhs );
	
	void 		beSigned( Bureaucrat popo );
	std::string	getname( void ) const;
    int			getgrade_to_sign( void ) const;
    int			getgrade_to_execute( void ) const;
	bool 		getsign_status( void ) const;
	void		setsign_status(bool _is_signed);

	void		check_all_grades( void );

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
				return ( "\033[1;31mError. You cannot create a Form with a grade under 1.\033[0m");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("\033[1;31mError. You cannot create a Form with a grade above 150, you cannot sign it if the Bureaucrat's grade is too low.\033[0m");
			}
	};
};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif