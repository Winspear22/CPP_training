/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:36:27 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 18:24:11 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

Account::Account( int initial_deposit )
{
    return ;
}

Account::~Account( void )
{
    return ;
}

static void Account::_displayTimestamp( void )
{
    time_t timestamp = time( NULL );
    struct tm * now = localtime( & timestamp );

	std::cout << "[" << now->tm_year+1900 << now->tm_mon+1 << now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] " <<  std::endl;
    return ;
}

void Account::makeDeposit( int deposit )
{
    return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
    return (true);
}

int Account::checkAmount( void ) const
{
    return ();
}

void Account::displayStatus( void ) const
{
    return ;
}