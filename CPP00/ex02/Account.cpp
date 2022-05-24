/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:37:15 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/09 10:40:07 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <cstddef>
#include "Account.hpp"
#include <stdlib.h>


void Account::_displayTimestamp( void )
{
    std::time_t result = std::time(__nullptr);
    std::cout << "[" << result << "] ";
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout   << "accounts:" << Account::getNbAccounts() << ";"
                << "total:" << Account::getTotalAmount() << ";"
                << "deposits:" << Account::getNbDeposits() << ";"
                << "withdrawals:" << Account::getNbWithdrawals()
                << std::endl;
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";"
                << "amount:" << this->checkAmount() << ";"
                << "deposits:" << this->_nbDeposits << ";"
                << "withdrawals:" << this->_nbWithdrawals
                << std::endl;
}
void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";"
                << "p_amount:" << this->checkAmount()<< ';' 
                << "deposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    this->_nbDeposits += 1;
    std::cout   << "amount:" << this->checkAmount() << ";"
                << "nb_deposit:" << this->_nbDeposits
                << std::endl;
    Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if ((this->_amount - withdrawal) < 0)
    {
        Account::_displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                << "p_amount:" << this->checkAmount()<< ';'
                << "withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        Account::_displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "p_amount:" << this->checkAmount()<< ';';
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        std::cout   << "amount:" << this->checkAmount() << ";"
                << "nb_withdrawals:" << this->_nbWithdrawals
                << std::endl;
        Account::_totalNbWithdrawals +=1;
    }
    return (true);
}

int	Account::checkAmount( void ) const
{
    return (this->_amount);
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}
int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}