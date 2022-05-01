/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:36:27 by adaloui           #+#    #+#             */
/*   Updated: 2022/05/01 13:20:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _accountIndex(this->_nbAccounts), _amount(initial_deposit),
				_nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount();
    std::cout << ";created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount = this->_totalAmount + this->checkAmount();
    return ;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount();
    std::cout << ";closed";
	if (this->_nbAccounts > 1)
		std::cout << std::endl;
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
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	this->_totalAmount = this->_totalAmount + deposit;
	std::cout << "amount:" << this->checkAmount() << ";";
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
	if (this->checkAmount() - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount = this->_amount - withdrawal;
		this->_totalAmount = this->_totalAmount - withdrawal;
		std::cout << "amount:" << this->checkAmount() << ";";
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}