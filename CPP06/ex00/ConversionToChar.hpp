/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToChar.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:38:30 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:38:31 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONTOCHAR_HPP
# define CONVERSIONTOCHAR_HPP

# include "ScalaireConversion.hpp"

bool CheckCharType( std::string argv );
void WriteChar( std::string argv );
bool CheckPrintability( char c );


#endif