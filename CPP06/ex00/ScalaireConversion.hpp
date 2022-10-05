/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalaireConversion.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:38 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:40:39 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRECONVERSION_HPP
# define SCALAIRECONVERSION_HPP

# include <iomanip>
# include <iostream>
# include <cctype>
# include <typeinfo>
# include <string>

# define SUCCESS 0
# define FAILURE 1
# define NOT_DIGIT 0
# define DIGIT 1

bool	CheckPrintability( char c );

#endif