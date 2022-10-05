/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalaireConversion.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:38 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/06 01:18:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRECONVERSION_HPP
# define SCALAIRECONVERSION_HPP

# include <iomanip>
# include <iostream>
# include <cctype>
# include <string>
# include <cmath>
# include <limits>

# define SUCCESS 0
# define FAILURE 1
# define NOT_DIGIT 0
# define DIGIT 1

bool	CheckPrintability( char c );

class ScalaireConversion
{
public:
        ScalaireConversion( std::string );
        ScalaireConversion( const ScalaireConversion & copy );
    	~ScalaireConversion( void );
        ScalaireConversion & operator=( const ScalaireConversion & rhs );

		double my_number;
		
		void 	PrintAllTypes( void );
		void	FindExceptions( void );
		class NotRequiredTypesException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					std::cout << "\033[1;31mError, you must type a valid type (char, int, float or double).\033[0m" << std::endl;
					return (0);
				}
		};
private:
		std::string _argv;
		void		_PrintCharType( void );
		void		_PrintIntType( void );
		void		_PrintFloatType( void );
		void		_PrintDoubleType( void );
	
};

#endif