/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:39:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/10 15:32:32 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbAccounts = 0;
	this->_nbDeposits = 0;
	this->_totalNbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = 0;
	this->_nbAccounts = 0;
	_displayTimestamp();
}

Account::~Account()
{
	return;
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

    std::cout << buffer << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	
}

int	Account::checkAmount() const
{
	return this->_amount;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > checkAmount())
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex 
			<< ";p_amount:" << checkAmount() << ";withdrawal:refused";
		return false;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() 
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