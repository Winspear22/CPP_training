/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionToInt.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:39:00 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/05 12:39:01 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONTOINT_HPP
# define CONVERSIONTOINT_HPP

# include "ScalaireConversion.hpp"

bool        CheckIntType( std::string argv );
void        WriteInt( std::string argv );
long long   ft_stoi(std::string str);

#endif