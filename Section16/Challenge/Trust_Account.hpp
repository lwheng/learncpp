#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP

#include "Savings_Account.hpp"
#include <iostream>
#include <string>


class Trust_Account : public Savings_Account
{
private:
    int withdrawals_left {3};
public:
    Trust_Account(std::string name = "Unnamed Trust Account", double balance = 0.0, double int_rate = 0.0);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual ~Trust_Account() = default;
    
    virtual void print(std::ostream &os) const override;
};

#endif // TRUST_ACCOUNT_HPP
