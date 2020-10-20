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

void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    
    os << "[Account: " << name << ": " << balance << "]";
}
