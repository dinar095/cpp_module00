#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <time.h>



int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int indx = 0;


void Account::_displayTimestamp()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
    std::cout << buffer;
}
void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << "withdrawals:" << _totalNbWithdrawals << std::endl;

}
Account::Account( int initial_deposit )
{
    indx++;
    _accountIndex = indx;
    Account();
    _amount = initial_deposit;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

Account::Account(void)
{
    this->_accountIndex = indx;
//    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalNbDeposits = 0;
    _totalNbWithdrawals = 0;
    std::cout << _accountIndex << std::endl;

    }

int Account::getNbWithdrawals(void) {
    return 0;
}

Account::~Account(void)
{

}

void Account::displayStatus(void) const
{
//    std::cout <<
}



