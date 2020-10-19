#include "Checking_Account.hpp"

#include <string>

Checking_Account::Checking_Account(std::string name, double balance)
    : Account(name, balance)
{
}

bool Checking_Account::withdraw(double amount) {
    if (amount < 0) {
        return false;
    }
    else {
        amount += withdrawal_fee;
        return Account::withdraw(amount);
    }
}

Checking_Account::~Checking_Account()
{
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    std::cout << "[Checking_Account: " << account.name << ": " << account.balance << ", " << account.withdrawal_fee << "]";
    return os;
}

