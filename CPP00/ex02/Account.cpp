/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:36:27 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/27 19:05:03 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account( int initial_deposit ): _accountIndex(this->_nbAccounts), _amount(initial_deposit),
				_nbDeposits(0), _nbWithdrawals(0)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount();
    std::cout << ";created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount = this->_totalAmount + this->checkAmount();
    return ;
}

Account::~Account( void )
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount();
    std::cout << ";destroyed" << std::endl;
	this->_nbAccounts--;
	this->_totalAmount = this->_totalAmount - this->checkAmount();
    return ;
}

void Account::_displayTimestamp( void )
{
    time_t timestamp = time( NULL );
    struct tm *now = localtime( & timestamp );

	std::cout << "[" << now->tm_year+1900 << now->tm_mon+1 << now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] " << std::endl;
    return ;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_nbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_nbWithdrawals);
}

void Account::makeDeposit( int deposit )
{
	std::cout << deposit << std::endl;
    return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
	std::cout << withdrawal << std::endl;
    return (true);
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

void Account::displayStatus( void ) const
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}