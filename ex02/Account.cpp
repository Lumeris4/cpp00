/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:39:02 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/10 13:25:09 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
	this->_amount = 0;
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
