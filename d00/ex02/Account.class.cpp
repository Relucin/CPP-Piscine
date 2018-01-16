/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 01:05:32 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/04 20:41:09 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit) {
    Account::_totalAmount += this->_amount;
    this->_accountIndex = Account::_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";closed" << std::endl;
}
void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    Account::_totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << " index:" << this->_accountIndex << ";p_amount:"
    << this->_amount << ";deposit:" << deposit << ";amount:";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << this->_amount << ";nb_deposits:" <<
    this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:"
    << this->_amount << ";withdrawal:";
    if (withdrawal <= this->_amount) {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        this->_amount -= withdrawal;
        std::cout << withdrawal << ";amount:" << this->_amount
        << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        Account::_totalAmount -= withdrawal;
        return (true);
    }
    std::cout << "refused" << std::endl;
    return (false);
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:"
    << this->_amount << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:"
    << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
    << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

/*
** private
*/
int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

void Account::_displayTimestamp(void) {
    time_t ts = time(0);
    tm *lts = localtime(&ts);
    std::cout << "[" << lts->tm_year + 1900 << std::setfill('0') <<
    std::setw(2) << lts->tm_mon << std::setfill('0') <<
    std::setw(2) << lts->tm_mday << "_" << std::setfill('0') <<
    std::setw(2) << lts->tm_hour << std::setfill('0') << std::setw(2) <<
    lts->tm_min << std::setfill('0') << std::setw(2) << lts->tm_sec << "]";
}

int Account::getNbWithdrawals(void) {
    return (Account::_totalNbWithdrawals);
}
