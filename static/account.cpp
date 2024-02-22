#include "account.hpp"

int Account::_sInterestRate = 1;

Account::Account(int balance) : _balance(balance)
{
}

int Account::getBalance() const{
    return _balance + _sInterestRate / 100 *_balance;
}

void Account::setBalance(int balance)
{
    _balance = balance;
}

void Account::setInterestRate(int rate)
{
    _sInterestRate = rate;
}

int Account::getInterestRate() {
    return _sInterestRate;
}