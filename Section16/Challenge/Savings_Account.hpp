#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP
#include "Account.hpp"


class Savings_Account : public Account
{
protected:
    double int_rate;
public:
    Savings_Account(std::string name = "Unnamed Savings Account", double balance = 0.0, double int_rate = 0.0);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual ~Savings_Account() = default;
    
    virtual void print(std::ostream &os) const override;
};

#endif // SAVINGS_ACCOUNT_HPP
