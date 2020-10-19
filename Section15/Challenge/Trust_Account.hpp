#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP

#include "Savings_Account.hpp"
#include <iostream>
#include <string>


class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    int withdrawals_left {3};
public:
    Trust_Account(std::string name = "Unnamed Trust Account", double balance = 0.0, double int_rate = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    ~Trust_Account();
};

#endif // TRUST_ACCOUNT_HPP
