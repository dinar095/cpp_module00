#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <time.h>


int counttt = 0;

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
    getNbAccounts();
    getTotalAmount();

}

Account::Account( int initial_deposit )
{
    Account Accountqwer;
    Accountqwer._nbDeposits = initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << counttt << ";amount:" << initial_deposit << ";created" << std::endl;
    counttt++;
    Account();
}

Account::Account(void)
{
    int index;
    index = counttt;
    _accountIndex = index++;
}

int Account::getNbWithdrawals(void) {
    return 0;
}

Account::~Account(void)
{

}



