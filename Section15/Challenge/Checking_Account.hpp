#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP

#include <iostream>
#include <string>
#include "Account.hpp"

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    const double withdrawal_fee {1.5};
public:
    Checking_Account(std::string name = "Unnamed Checking Account", double balance = 0.0);
    bool withdraw(double amount);
    ~Checking_Account();
};

#endif // CHECKING_ACCOUNT_HPP
