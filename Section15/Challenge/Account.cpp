#include "Account.hpp"

// Account(std::string name = "Unnamed Account", double balance = 0.0);
Account::Account (std::string name, double balance)
    : name {name}, balance {balance}
{
}

bool Account::deposit (double amount) {
    if (amount < 0) {
        return false;
    }
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw (double amount) {
    if (amount < 0) {
        return false;
    }
    else if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}

double Account::get_balance() const {
    return balance;
}

Account::~Account() {
    
}


std::ostream &operator<<(std::ostream &os, const Account &account) {
    std::cout << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}
