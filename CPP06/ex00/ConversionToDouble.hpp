/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToDouble.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:38:37 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:38:38 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONTODOUBLE_HPP
# define CONVERSIONTODOUBLE_HPP

# include "ScalaireConversion.hpp"

bool    CheckDoubleType( std::string argv );
void    WriteDouble( std::string argv );
double  ft_stod(std::string str);

#endif