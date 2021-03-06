#include "Trust_Account.hpp"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate)
{
}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000) {
        amount += 50;
    }
    return Savings_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount) {
    double max_amt {balance * 0.2};
    if (withdrawals_left > 0 && amount < max_amt) {
        if (Savings_Account::withdraw(amount)) {
            --withdrawals_left;
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

Trust_Account::~Trust_Account()
{
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    std::cout << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " <<  account.withdrawals_left << "]";
    return os;
}

