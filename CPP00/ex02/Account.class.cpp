/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucrece <lucrece@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:30:24 by ldes-cou          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/09 10:40:52 by ldes-cou         ###   ########.fr       */
=======
/*   Updated: 2022/02/08 16:53:29 by lucrece          ###   ########.fr       */
>>>>>>> 41dcb9a74eccfde6f2c49c53e64197d40473a695
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int i = 0;

Account::Account(void)
{
	return;
}
Account::Account( int initial_deposit )
{
	this->_accountIndex = i;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_nbAccounts += 1;
	this->_totalAmount += this->_amount;
	std::cout   << "index:" << this->_accountIndex << ";" 
				<< "amount:" << this->checkAmount() << ";"
				<< "created" << std::endl;
	i += 1;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex << ";" 
				<< "amount:" << this->_amount << ";"
				<< "closed";
}
Account::Account()
{
	return;
}