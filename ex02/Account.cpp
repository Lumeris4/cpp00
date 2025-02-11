/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:39:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/11 09:49:56 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = getNbAccounts();
	this->_nbAccounts++;
	_totalAmount+= initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created"
		<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" 
		<< std::endl;
	return;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " account:" << _nbAccounts << ";total:" << _totalAmount << ";deposit:"
		<< _totalNbDeposits << ";withdrawal:" << _totalNbWithdrawals << std::endl;
	return ;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(NULL);
    std::tm timeinfo = *std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &timeinfo);
    std::cout << buffer;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amout:" << checkAmount();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount()
		<< ";nb_deposit:" << this->_nbDeposits << std::endl;
}

int	Account::checkAmount() const
{
	return this->_amount;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";deposit:"
		<< this->_nbDeposits << ";withdrawal:" << this->_nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > checkAmount())
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex 
			<< ";p_amount:" << checkAmount() << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << checkAmount() 
			<< ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << ";amount:" << checkAmount() << ";nb_withdrawal:" 
			<< this->_nbWithdrawals << std::endl;
		return true;
	}
}