/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:36:27 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/28 08:41:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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

	std::cout << "[" << now->tm_year+1900 << now->tm_mon+1 << now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";
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
    int _nbDeposits = 0;
    return (_nbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    int _nbWithdrawals = 0;
    return (_nbWithdrawals);
}

void Account::makeDeposit( int deposit )
{
	std::cout << deposit;
    return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
	std::cout << withdrawal;
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

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}