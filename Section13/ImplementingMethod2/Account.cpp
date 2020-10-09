#include "Account.hpp"

#include <iostream>

Account::Account(std::string n, double b)
  : name{n}, balance{b} {
}

// Copy constructor
Account::Account(const Account &source)
  : name{source.name}, balance{source.balance} {
    std::cout << "Copy constructor - made a copy of: " << source.name << std::endl;
}

// Destructor
Account::~Account() {
    std::cout << "Destructor called for: " << name << std::endl;
}

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}
  
bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}
