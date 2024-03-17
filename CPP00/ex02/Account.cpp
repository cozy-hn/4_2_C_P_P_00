#include "Account.hpp"
#include <iostream>

using std::cout;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}